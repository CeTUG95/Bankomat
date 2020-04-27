#-------------------------------------------------
#
# Project created by QtCreator 2018-06-20T10:58:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bankomat
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        mainwindow.cpp \
    src/bankautomat.cpp \
    src/bankzentrale.cpp \
    src/drucker.cpp \
    src/geldfach.cpp \
    src/geldkassette.cpp \
    src/geldschein.cpp \
    src/id_kartenleser.cpp \
    src/karte.cpp \
    src/kontodaten.cpp \
    src/main.cpp \
    src/monitor.cpp \
    src/sitzung.cpp \
    src/transportbaender.cpp \
    src/tresor.cpp \
    src/gui.cpp \
    src/auszahlung.cpp \
    src/einzahlung.cpp \
    src/kontostandabfrage.cpp \
    src/pin_aenderung.cpp \
        testmain.cpp \
        firsttest.cpp \
    auszahlungtest.cpp

    SOURCES -= \
        testmain.cpp \
        firsttest.cpp

    HEADERS += \
        mainwindow.h \
    src/bankautomat.h \
    src/bankzentrale.h \
    src/drucker.h \
    src/geldfach.h \
    src/geldkassette.h \
    src/geldschein.h \
    src/id_kartenleser.h \
    src/karte.h \
    src/kontodaten.h \
    src/monitor.h \
    src/sitzung.h \
    src/transportbaender.h \
    src/tresor.h \
    src/gui.h \
    src/auszahlung.h \
    src/einzahlung.h \
    src/kontostandabfrage.h \
    src/pin_aenderung.h \
        firsttest.h \
    auszahlungtest.h

    HEADERS -= \
        firsttest.h

FORMS += \
        mainwindow.ui \
    src/gui.ui


RESOURCES += \
    data/funf.jpg \
    data/funfzig.jpg \
    data/Klassendiagramm.jpg \
    data/Sequienzdiagramm.jpg \
    data/Sitzung-Klassendiagramm.jpg \
    data/Statemaschiene.jpg \
    data/zehn.jpg \
    data/zwanzig.jpg \
    data/logo.png \
    data/data.qrc


test {
    message(Test build)

    QT += testlib
    TARGET = Bankomat-test

    SOURCES -= \
        src/main.cpp \
        src/gui.cpp

    HEADERS -= \
        src/gui.h

    SOURCES += \
        testmain.cpp \
        firsttest.cpp

    HEADERS += \
        firsttest.h

} else {
    message(Normal build)
}

DISTFILES += \
    data/Ãbersicht.jpg \
    data/funf.jpg \
    data/funfzig.jpg \
    data/Klassendiagramm.jpg \
    data/Sequienzdiagramm.jpg \
    data/Sitzung-Klassendiagramm.jpg \
    data/Statemaschiene.jpg \
    data/zehn.jpg \
    data/zwanzig.jpg \
    data/logo.png \
    data/DBK1.jpg \
    data/Welcome.jpg
