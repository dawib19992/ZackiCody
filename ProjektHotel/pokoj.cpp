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

void Pokoj::on_kalendarz_activated(const QDate &date)
{
    QDate data_roz = ui->kalendarz->selectedDate();
    qDebug()<<"Data rozpoczęcia: "<<data_roz;

}

