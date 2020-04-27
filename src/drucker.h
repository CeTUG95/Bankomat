#ifndef DRUCKER_H
#define DRUCKER_H

#include "bankautomat.h"
#include "quittung.h"

class drucker{
private:
    bankautomat *atm;
public:
    drucker(bankautomat* atm);
    drucker();
};

#endif // DRUCKER_H
