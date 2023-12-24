#include "panelsterowania.h"
#include "ui_panelsterowania.h"

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
