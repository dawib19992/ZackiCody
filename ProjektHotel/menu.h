#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
