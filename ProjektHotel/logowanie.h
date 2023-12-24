#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


QT_BEGIN_NAMESPACE
namespace Ui {
class Logowanie;
}
QT_END_NAMESPACE

class Logowanie : public QMainWindow
{
    Q_OBJECT

public:
    Logowanie(QWidget *parent = nullptr);
    ~Logowanie();

private slots:
    void on_zaloguj_released();

    void on_rejestracja_clicked();

private:
    Ui::Logowanie *ui;
    QSqlDatabase mydb;
};
#endif // LOGOWANIE_H
