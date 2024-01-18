#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "gosc.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(Gosc* gosc, QWidget *parent = nullptr);
    ~Menu();
    void setGosc(Gosc* gosc);

private slots:

    void on_pushButton_clicked();

    void on_zamow_clicked();

private:
    Ui::Menu *ui;
    Gosc* obecnygosc;
};

#endif // MENU_H
