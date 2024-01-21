#ifndef REZERWUJPARKING_H
#define REZERWUJPARKING_H

#include <QMainWindow>

namespace Ui {
class rezerwujparking;
}

class rezerwujparking : public QMainWindow
{
    Q_OBJECT

public:
    explicit rezerwujparking(QWidget *parent = nullptr);
    ~rezerwujparking();

private:
    Ui::rezerwujparking *ui;
};

#endif // REZERWUJPARKING_H
