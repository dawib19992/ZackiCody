#include "rezerwujparking.h"
#include "ui_rezerwujparking.h"

rezerwujparking::rezerwujparking(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::rezerwujparking)
{
    ui->setupUi(this);
}

rezerwujparking::~rezerwujparking()
{
    delete ui;
}
