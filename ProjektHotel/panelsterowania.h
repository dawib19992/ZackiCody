#ifndef PANELSTEROWANIA_H
#define PANELSTEROWANIA_H

#include <QMainWindow>
#include "gosc.h"
#include "rezerwacja.h"
namespace Ui {
class Panelsterowania;
}

class Panelsterowania : public QMainWindow
{
    Q_OBJECT

public:
    explicit Panelsterowania(Gosc gosc, QWidget *parent = nullptr);
    ~Panelsterowania();

private slots:
    void on_wylogujSie_clicked();

    void on_zarezerwujPokoj_clicked();

    void on_zarezerwujSK_clicked();

    void on_zarezerwujParking_clicked();

private:
    Ui::Panelsterowania *ui;
    QString login;
    QString haslo;
    Rezerwacja* rezerwacja;
};

#endif // PANELSTEROWANIA_H
