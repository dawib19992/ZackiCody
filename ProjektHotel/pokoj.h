#ifndef POKOJ_H
#define POKOJ_H

#include <QMainWindow>
#include "rezerwacje.h"

namespace Ui {
class Pokoj;
}

class Pokoj : public QMainWindow, public Rezerwacje
{
    Q_OBJECT

public:
    explicit Pokoj(Gosc* gosc, QWidget *parent = nullptr);
    ~Pokoj();

private slots:
    void on_kalendarz_activated(const QDate &date);

private:
    Ui::Pokoj *ui;
    Rezerwacje* rezerwacja;
    int Rodzaj_pokoju;
};

#endif // POKOJ_H
