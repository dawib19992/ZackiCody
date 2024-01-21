#include "rezerwujpokoj.h"
#include "ui_rezerwujpokoj.h"
#include "panelsterowania.h"

RezerwujPokoj::RezerwujPokoj(Gosc* gosc, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RezerwujPokoj)
{
    ui->setupUi(this);
    obecnygosc = gosc;
}

RezerwujPokoj::~RezerwujPokoj()
{
    delete ui;
}

void RezerwujPokoj::on_powrot_clicked()
{
    this->close();
    Panelsterowania* ps = new Panelsterowania(obecnygosc);
    ps->show();
}

