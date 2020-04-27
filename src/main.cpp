#include <iostream>
#include <QApplication>
#include <QSettings>
#include <QCommandLineParser>
#include <QtDebug>
#include <QDir>
#include <QApplication>
#include <QtGui>
#include <QPushButton>

#include "erster_schritt.h"
#include "gui.h"

#include "bankzentrale.h"
#include "kontodaten.h"
#include "bankautomat.h"
#include <string>

using namespace std;
int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    //start w;
    //w.show();

    bankzentrale* Bank = new bankzentrale();
    //Kunden init
    kontodaten Fatih(1, "Bas", "Fatih", 0.01, Bank,"1463");
    kontodaten Tugay(2, "Cevik", "Tugay", 1000.0, Bank,"6311");
    kontodaten Mehmet(3, "Goecen", "Mehmet", 1050.0, Bank,"1164");

    bankautomat atm(Bank);

    atm.hochfahren();


    GUI objektgui(&atm);
    objektgui.show();

    return a.exec();
    //return 0;
}
