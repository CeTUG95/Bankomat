#ifndef TRESOR_H
#define TRESOR_H

#include "bankautomat.h"
#include "geldkassette.h"
#include<vector>
class bankautomat;

class tresor
{
private:
    bankautomat* atm;
    bool look;
    vector<class geldkassette *>kassette;
public:

    void oeffnen();
    void schliessen();
    tresor(bankautomat* atm);
    tresor();
};

#endif // TRESOR_H
