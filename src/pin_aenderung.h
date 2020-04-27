#ifndef PIN_AENDERUNG_H
#define PIN_AENDERUNG_H

#include "sitzung.h"


class pin_aenderung:public sitzung{
    Q_OBJECT

public:
    pin_aenderung(bankautomat* atm);
public slots:
    void pin_aendern(string pin, string neupin);
};

#endif // PIN_AENDERUNG_H
