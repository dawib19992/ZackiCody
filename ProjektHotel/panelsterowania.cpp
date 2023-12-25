#include "panelsterowania.h"
#include "ui_panelsterowania.h"
#include "logowanie.h"

Panelsterowania::Panelsterowania(Gosc gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Panelsterowania)
{
    ui->setupUi(this);
    login = gosc.getLogin();
    haslo = gosc.getHaslo();
    ui->td_login->setText(login);
    ui->td_haslo->setText(haslo);
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


void Panelsterowania::on_zarezerwujPokoj_clicked()
{
    close();
    rezerwacja = new Rezerwacja(this);
    rezerwacja->show();

}


void Panelsterowania::on_zarezerwujSK_clicked()
{
    close();
    rezerwacja = new Rezerwacja(this);
    rezerwacja->show();
}


void Panelsterowania::on_zarezerwujParking_clicked()
{
    close();
    rezerwacja = new Rezerwacja(this);
    rezerwacja->show();
}


