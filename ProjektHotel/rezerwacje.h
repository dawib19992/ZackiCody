#ifndef REZERWACJE_H
#define REZERWACJE_H
#include "gosc.h"

class Rezerwacje
{
    Gosc* obecnygosc;
    int rodzajrezerwacji;
public:
    Rezerwacje();
    void setGosc(Gosc* gosc);
    void setRR(int rr);
    Gosc* getGosc();
    int GetRR();
};

#endif // REZERWACJE_H
