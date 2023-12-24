#include "logowanie.h"
#include "ui_logowanie.h"

Logowanie::Logowanie(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Logowanie)
{
    ui->setupUi(this);
    mydb = QSqlDatabase::addDatabase("SQLITE");
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
