#ifndef BANKAUTOMAT_H
#define BANKAUTOMAT_H

#include "geldfach.h"
#include "tresor.h"
#include "id_kartenleser.h"
#include "monitor.h"
#include "sitzung.h"
#include "bankzentrale.h"
#include "drucker.h"

#include <iostream>
#include <vector>
#include <QObject>

using namespace std;
class bankzentrale;


class bankautomat:public QObject{
    Q_OBJECT
private:
    bankzentrale* zentrale;

    class sitzung* session;
    class geldfach* fach;
    class tresor* ts;
    class id_kartenleser* idk;
    class monitor* anzeige;
    class drucker* druck;


public:

    void hochfahren();
    void herunterfahren();
    bankzentrale* getZentrale();
    bankautomat(bankzentrale* zentrale);

    monitor* getAnzeige();
    geldfach* getGeldfach();
    tresor* getTresor();
    id_kartenleser* getKatenleser();
    drucker* getDrucker();
    sitzung* getSession();

public slots:
    void sitzung_starten(int);

};

#endif // BANKAUTOMAT_H
