#ifndef KONTOSTANDABFRAGE_H
#define KONTOSTANDABFRAGE_H

#include "sitzung.h"


class kontostandabfrage:public sitzung{
    Q_OBJECT
public:
    kontostandabfrage(bankautomat* atm);

public slots:
    double kontostand_abfragen();
};

#endif // KONTOSTANDABFRAGE_H
