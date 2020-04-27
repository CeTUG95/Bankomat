#ifndef FIRSTTEST_H
#define FIRSTTEST_H
#include <QObject>

class firsttest: public QObject{
    Q_OBJECT
private slots:
    void toUpper();
};

#endif // FIRSTTEST_H
