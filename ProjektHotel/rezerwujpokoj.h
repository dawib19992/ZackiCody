#ifndef REZERWUJPOKOJ_H
#define REZERWUJPOKOJ_H

#include <QMainWindow>
#include "gosc.h"

namespace Ui {
class RezerwujPokoj;
}

class RezerwujPokoj : public QMainWindow
{
    Q_OBJECT

public:
    explicit RezerwujPokoj(Gosc* gosc, QWidget *parent = nullptr);
    ~RezerwujPokoj();

private slots:
    void on_powrot_clicked();

private:
    Ui::RezerwujPokoj *ui;
    Gosc* obecnygosc;
};

#endif // REZERWUJPOKOJ_H
