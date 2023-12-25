#ifndef GOSC_H
#define GOSC_H
#include <QString>

class Gosc
{
    int id;
public:
    Gosc(const int id_);
    int getID() const
    {
        return id;
    }
};

#endif // GOSC_H
