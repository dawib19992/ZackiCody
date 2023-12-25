#include "panelsterowania.h"
#include "ui_panelsterowania.h"
#include "logowanie.h"

Panelsterowania::Panelsterowania(Gosc gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Panelsterowania)
{
    ui->setupUi(this);
    id = gosc.getID();
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


