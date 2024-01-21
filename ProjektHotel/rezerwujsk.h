#ifndef REZERWUJSK_H
#define REZERWUJSK_H

#include <QMainWindow>

namespace Ui {
class RezerwujSK;
}

class RezerwujSK : public QMainWindow
{
    Q_OBJECT

public:
    explicit RezerwujSK(QWidget *parent = nullptr);
    ~RezerwujSK();

private:
    Ui::RezerwujSK *ui;
};

#endif // REZERWUJSK_H
