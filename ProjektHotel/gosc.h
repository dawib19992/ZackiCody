#ifndef GOSC_H
#define GOSC_H
#include <QString>

class Gosc
{
    QString login;
    QString haslo;
public:
    Gosc(const QString& login_, const QString& haslo_);
    QString getLogin() const;
    QString getHaslo() const;
};

#endif // GOSC_H
