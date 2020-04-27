#ifndef ERSTER_SCHRITT_H
#define ERSTER_SCHRITT_H

#include <QMainWindow>
#include <QString>

#include <string>
#include "bankautomat.h"


namespace Ui {
class erster_schritt;
}

class erster_schritt : public QMainWindow
{
    Q_OBJECT
    Ui::erster_schritt *ui;
    bankautomat *atm;


public:
    explicit erster_schritt(QWidget *parent = 0);
    explicit erster_schritt(bankautomat* atm);

    void setup_gui();

    ~erster_schritt();

    int Karte,Karten,Einzahlungsbetrag;
    QString nummer;
//    bankautomat* atm;
    bankzentrale* Bank;
    void hilfeaufruf(){
        on_pushButton_hilfe_clicked();
    }

private slots:
    void on_Karte_1_clicked();

    void on_Karte_2_clicked();

    void on_Karte_3_clicked();

    void on_Kartenleser_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_hilfe_clicked();

    void on_pushButton_Korrektur_clicked();

    void on_pushButton_Bestaetigung_clicked();

    void on_pushButton_Abbruch_clicked();


    void on_pushButton_Einzahlung_clicked();

    void on_pushButton_Auszahlung_clicked();

    void on_pushButton_Kontostand_clicked();

    void on_pushButton_PIN_aendern_clicked();

    int on_fuenf_clicked();

    int on_zehner_clicked();

    int on_zwanny_clicked();

    int on_fuffy_clicked();


};

#endif // ERSTER_SCHRITT_H
