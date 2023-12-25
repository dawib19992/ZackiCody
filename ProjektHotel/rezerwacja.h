#ifndef REZERWACJA_H
#define REZERWACJA_H

#include <QMainWindow>
#include "gosc.h"
#include "panelsterowania.h"
namespace Ui {
class Rezerwacja;
}

class Rezerwacja : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rezerwacja(Gosc gosc, QWidget *parent = nullptr);
    ~Rezerwacja();

private slots:
    void on_back_clicked();

private:
    Ui::Rezerwacja *ui;
    Panelsterowania* ps;
    QString login;
    QString haslo;
};

#endif // REZERWACJA_H
