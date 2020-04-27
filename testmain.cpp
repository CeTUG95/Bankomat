#include <QApplication>
// QtTest lässt sich nun magischer Weise inkludieren. Scheinbar war mein problem kaskardierend.
#include <QtTest>
#include <iostream>
#include "firsttest.h"

using namespace std;
int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    cout << "Das ist die Testmain! Hier werden Testcases reingeschrieben!" << endl;

    // so erstellen wir ein Objekt der Testklasse und fügen sie so ein
    firsttest cmp;
    // So rufen wir den Test also auf !
    return QTest::qExec(&cmp, argc, argv);
}
