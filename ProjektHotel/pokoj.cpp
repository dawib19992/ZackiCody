#include "pokoj.h"
#include "ui_pokoj.h"

Pokoj::Pokoj(Gosc* gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pokoj)
{
    ui->setupUi(this);
    rezerwacja->setGosc(gosc);
    rezerwacja->setRodzajRezerwacj(1);
}

Pokoj::~Pokoj()
{
    delete ui;
}

