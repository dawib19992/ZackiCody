#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    QSqlQuery query;
    if(query.exec("select * from menu where id= 1"))
    {
        if(query.next())
        {
            QString nazwa = query.value(1).toString();
            double cena = query.value(2).toDouble();
            QString danie = nazwa + " | " + QString::number(cena);
            ui->danie1->setText(danie);

        }
    }
}

Menu::~Menu()
{
    delete ui;
}
