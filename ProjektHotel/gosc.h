#ifndef GOSC_H
#define GOSC_H
#include <QString>

class Gosc
{
    int id;
    QString login;
    QString haslo;
public:
    Gosc(const int id_);
    int getID() const;
    void setLogin(QString login_);
    void setHaslo(QString haslo_);
    QString getLogin() const;
    QString getHaslo() const;
};

#endif // GOSC_H
