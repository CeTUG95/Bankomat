#ifndef TRANSPORTBAENDER_H
#define TRANSPORTBAENDER_H
// Sillos to the maximum !!! Oversinnlosigkeits drive aktiviert !
#include "bankautomat.h"

class transportbaender
{
public:
    class bankautomat &atm;
    void geldtransport();
    transportbaender(bankautomat atm);
};

#endif // TRANSPORTBAENDER_H
// No Joke das hat keine anbindung an unseren code das isz hier total sinnlos wie uns aufgefallen ist
