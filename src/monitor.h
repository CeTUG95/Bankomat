#ifndef MONITOR_H
#define MONITOR_H

#include "bankautomat.h"
#include <QObject>

class monitor: public QObject
{
    Q_OBJECT
private:
    class bankautomat* atm;
public:
    void sitzung_aktuallisieren();
    void pin_fordern();
    void menu_anzeigen();
    void betrag_fordern();
    void gui_start();
    monitor(bankautomat* atm);
    monitor();
signals:
    void menu_auswahl();
};

#endif // MONITOR_H
