#include "firsttest.h"
#include <QtTest/QtTest>

void firsttest::toUpper(){
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}
