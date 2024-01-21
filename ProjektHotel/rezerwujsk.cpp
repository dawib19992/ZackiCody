#include "rezerwujsk.h"
#include "ui_rezerwujsk.h"

RezerwujSK::RezerwujSK(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RezerwujSK)
{
    ui->setupUi(this);
}

RezerwujSK::~RezerwujSK()
{
    delete ui;
}
