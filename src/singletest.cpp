//// Sinnloser Test !!!
//#include <string>

#include <QtTest/QtTest>

//class Test : public QObject{
//    Q_OBJECT
//private slots:
//    void toUpper();
//};
//void Test::toUpper(){
//    QString str = "Hillo";
//    QVERIFY(str.toUpper() == "HILO");
//}

class Test : public QObject{
    Q_OBJECT
private slots:
    void toupper();
};

void Test::toupper(){
    QString str = "Mehmet";
    QVERIFY(str.toUpper() == "MEHMET");
}
