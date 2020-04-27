#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QString>

#include <string>
#include "bankautomat.h"
#include "karte.h"
class Karte;

namespace Ui {
class GUI;
}

class GUI : public QMainWindow
{
    Q_OBJECT

    bankautomat *atm;

public:
    explicit GUI(QWidget *parent = 0);
    explicit GUI(bankautomat* atm);

    ~GUI();
    void setup_connect();
    int MKart,Karten,betrag;
    int modus,count;
    QString nummer,pin,altpin;
    bankzentrale* Bank;

signals:
    void leseKarte(Karte*);
    void auswahl_operation(int);
    void einzahlen(int);
    void auszahlen(int,string);
    double kontostand();
    void abbrechen();
    void pin_weiterleitung(string,string);

private slots:
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

    void on_Karte_1_clicked();

    void on_Karte_2_clicked();

    void on_Karte_3_clicked();

    void on_funfeuroschein_clicked();

    void on_zehneuroschein_clicked();

    void on_zwanzigeuroschein_clicked();

    void on_funfzigeuroschein_clicked();

    void on_Einzahlen_B_clicked();

    void on_pushButton_Bestaetigen_clicked();

    void on_Auszahlen_B_clicked();

    void on_Kartenschlitz_clicked();

    void on_pushButton_Abbrechen_clicked();

    void on_Karte_4_clicked();

    void on_Kontostand_B_clicked();

    void on_PIN_AE_B_clicked();

    void on_AB_10_clicked();

    void on_AB_100_clicked();

    void on_AB_200_clicked();

    void on_AB_5_clicked();

    void on_AB_50_clicked();

    void on_pushButton_Korrektur_clicked();

    void on_pushButton_Hilfe_clicked();

    std::string pin_eingabe();

    void on_Geldfach_B_clicked();

private:
    Ui::GUI *ui;
};

#endif // GUI_H
