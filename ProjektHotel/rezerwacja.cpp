#include "rezerwacja.h"
#include "ui_rezerwacja.h"
Rezerwacja::Rezerwacja(Gosc gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Rezerwacja)
{
    ui->setupUi(this);
    login = gosc.getLogin();
    haslo = gosc.getHaslo();
}

Rezerwacja::~Rezerwacja()
{
    delete ui;
}

void Rezerwacja::on_back_clicked()
{
    close();
    ps = new Panelsterowania(gosc);
    ps->show();
}

