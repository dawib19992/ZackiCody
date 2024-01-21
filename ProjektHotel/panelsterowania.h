#ifndef PANELSTEROWANIA_H
#define PANELSTEROWANIA_H

#include <QMainWindow>
#include "gosc.h"
namespace Ui {
class Panelsterowania;
}

class Panelsterowania : public QMainWindow
{
    Q_OBJECT

public:
    explicit Panelsterowania(Gosc* gosc, QWidget *parent = nullptr);
    ~Panelsterowania();
    void setGosc(Gosc* gosc);
private slots:
    void on_wylogujSie_clicked();

    void on_sprawdzMenu_clicked();

private:
    Ui::Panelsterowania *ui;
    Gosc* obecnygosc;
};

#endif // PANELSTEROWANIA_H
