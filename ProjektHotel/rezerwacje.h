#ifndef REZERWACJE_H
#define REZERWACJE_H
#include "gosc.h"

class Rezerwacje
{
    int rodzaj_rezerwacji;//1-pokoj, 2-sk, 3-parking
    Gosc* obecnygosc;
public:
    Rezerwacje();
    int getRodzajRezerwacji();
    Gosc* getGosc();
    void setRodzajRezerwacj(int rr);
    void setGosc(Gosc* gosc);
};

#endif // REZERWACJE_H
