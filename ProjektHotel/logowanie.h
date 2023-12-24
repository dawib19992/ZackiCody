#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QMainWindow>

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

private:
    Ui::Logowanie *ui;
};
#endif // LOGOWANIE_H
