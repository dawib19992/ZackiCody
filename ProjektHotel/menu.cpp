#include "menu.h"
#include "ui_menu.h"
#include "panelsterowania.h"
#include "gosc.h"

void Menu::setGosc(Gosc* gosc)
{
    obecnygosc = gosc;
}

Menu::Menu(Gosc* gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    setGosc(gosc);
    QSqlQuery query;
    query.exec("select * from loginy where id = '"+QString::number(gosc->getID())+"'");
    if(query.exec())
    {
        QString login = query.value(1).toString();
        QString haslo = query.value(2).toString();
        qDebug()<<"Login: "<<login<<" Haslo: "<<haslo<<"\n";
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

