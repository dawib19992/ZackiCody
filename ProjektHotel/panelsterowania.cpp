#include "panelsterowania.h"
#include "ui_panelsterowania.h"
#include "logowanie.h"
#include "menu.h"
#include "rezerwujpokoj.h"

void Panelsterowania::setGosc(Gosc* gosc)
{
    obecnygosc = gosc;
}

Panelsterowania::Panelsterowania(Gosc* gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Panelsterowania)
{
    ui->setupUi(this);
    setGosc(gosc);
    QSqlQuery query;
    query.exec("select * from loginy where id = '"+QString::number(obecnygosc->getID())+"'");
    if(query.next())
    {
        QString login = query.value(1).toString();
        QString haslo = query.value(2).toString();
        ui->td_login->setText(login);
        ui->td_haslo->setText(haslo);
    }
}

Panelsterowania::~Panelsterowania()
{
    delete ui;
}

void Panelsterowania::on_wylogujSie_clicked()
{
    close();
    Logowanie* wyloguj = new Logowanie(this);
    wyloguj->show();
}

void Panelsterowania::on_sprawdzMenu_clicked()
{
    this->hide();
    Menu* menu = new Menu(obecnygosc);
    menu->show();
}

void Panelsterowania::on_rezerwujPokoj_clicked()
{
    this->hide();
    RezerwujPokoj* rp = new RezerwujPokoj(obecnygosc);
    rp->show();
}


void Panelsterowania::on_rezerwujSK_clicked()
{
    this->hide();
    RezerwujPokoj* rp = new RezerwujPokoj(obecnygosc);
    rp->show();
}

