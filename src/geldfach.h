#ifndef GELDFACH_H
#define GELDFACH_H

#include "bankautomat.h"
class bankautomat;

class geldfach
{
private:
    float geld;
    bankautomat* atm;
public:
    void fach_oeffnen();
    void fach_schliessen();
    void geld_zaehlen(float betrag);
    void geld_auswerfen();
    geldfach(bankautomat* atm);
    // Ich fand Money hat sich in dem Fall einfach 1000 mal besser angehört Leute
    float getMoney();
    void setMoney(float Money);
};

#endif // GELDFACH_H
