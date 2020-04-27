#ifndef ID_KARTENLESER_H
#define ID_KARTENLESER_H

#include <QObject>
#include "bankautomat.h"
class Karte;

class id_kartenleser : public QObject
{
    Q_OBJECT
private:
    bool Karte_in;
    class bankautomat* atm;
    Karte* karte;

public:
    void karte_einbehalten();
    void karte_einziehen();
    void karte_auswerfen();
    void kunden_id_lesen(Karte *karte);
    Karte *getInfo();

    id_kartenleser(bankautomat* atm);

private slots:
    void einschieben(Karte *karte);

};

#endif // ID_KARTENLESER_H
