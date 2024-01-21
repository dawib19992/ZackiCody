#include "menu.h"
#include "ui_menu.h"
#include "panelsterowania.h"
#include "gosc.h"
#include <QSpinBox>

void Menu::setGosc(Gosc* gosc_)
{
    obecnygosc = gosc_;
}

Menu::Menu(Gosc* gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    ui->menu->setReadOnly(1);
    setGosc(gosc);
    QSqlQuery query;
    int licznik = 0;
    if(query.exec("Select MAX(id) FROM menu"))
    {
        if(query.next())
        {
            licznik = query.value(0).toInt();

        }
    }
    for(int i = 1; i <= licznik; i++)
    {
        if(query.exec("SELECT * from menu where id = '"+QString::number(i)+"'"))
        {
            while(query.next())
            {
                QString dotychczas =ui->menu->toPlainText();
                dotychczas += QString::number(i) + ". " + query.value(1).toString() + " " + QString::number(query.value(2).toFloat()) + " PLN"+"\n";
                ui->menu->setPlainText(dotychczas);
            }
        }
    }


}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    this->close();
    Panelsterowania* ps = new Panelsterowania(obecnygosc);
    ps->show();
}


void Menu::on_zamow_clicked()
{
    qDebug()<<obecnygosc->getID();
    int id_jedzenia = ui->spinBox->value();
    int licznik = 0;
    QSqlQuery countquery;
    if(countquery.exec("Select MAX(id) from zamowienia"));
    {
        if(countquery.next())
        {
            licznik = countquery.value(0).toInt() + 1;
        }
    }
    QSqlQuery query;
    if(query.exec("INSERT INTO zamowienia VALUES('"+QString::number(licznik)+"','"+QString::number(obecnygosc->getID())+"', '"+QString::number(id_jedzenia)+"'"))
    {
        if(query.next())
        {
            qDebug()<<"ELEGANCKO";
        }
    }

}

