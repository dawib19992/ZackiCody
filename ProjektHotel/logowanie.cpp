#include "logowanie.h"
#include "ui_logowanie.h"
#include "gosc.h"
#include "panelsterowania.h"

Logowanie::Logowanie(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Logowanie)
{
    ui->setupUi(this);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/dawid/Documents/GitHub/ZackiCody/sqlite/hotel.db");
    if(!mydb.open())
    {
        qDebug()<<"Brak połączenia z bazą\n";
    }
    else
    {
        qDebug()<<"Połączono...\n";
    }
}

Logowanie::~Logowanie()
{
    delete ui;
}

void Logowanie::on_zaloguj_released()
{
    QString login = ui->Login_lineedit->text();
    QString haslo = ui->Haslo_lineedit->text();

    Gosc gosc(login, haslo);
    QSqlQuery query;
    int dodano = 0;
    if(query.exec("select * from loginy where login='"+gosc.getLogin()+"'and haslo= '"+gosc.getHaslo()+"'"))
    {
        int licznik = 0;
        while(query.next())
        {
            licznik++;
        }
        if(licznik == 1)
        {
            qDebug()<<"Poprawne login i hasło\n";
            dodano++;
        }
        if(licznik < 1)
        {
            qDebug()<<"Taki użytkownik nie występuje w bazie";
        }
    }
    if(dodano == 1)
    {
        this->close();
        Panelsterowania * ps = new Panelsterowania(gosc);
        ps->show();
    }
}


void Logowanie::on_rejestracja_clicked()
{
    QString login, haslo;
    login = ui->Login_lineedit->text();
    haslo = ui->Haslo_lineedit->text();
    if(!mydb.isOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    QSqlQuery countQuery("SELECT MAX(id) FROM loginy", mydb);
    if (countQuery.exec() && countQuery.next()) {
        int licznik = countQuery.value(0).toInt() + 1;

        QSqlQuery insertQuery;
        if(insertQuery.exec("INSERT INTO loginy VALUES(" + QString::number(licznik) + ", '" + login + "', '" + haslo + "')"))
        {
            qDebug() <<"Dodano użytkownika do bazy, teraz możesz się zalogować";
        }
        else
        {
            qDebug() << "Błąd wstawiania danych:" << insertQuery.lastError().text();
        }
    }
    else
    {
        qDebug() << "Błąd pobierania wartości licznika:" << countQuery.lastError().text();
    }
}

