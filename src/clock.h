#ifndef CLOCK_H
#define CLOCK_H

#include <QObject>
#include <QTimer>
#include <QTime>

#define DEFAULT_FRAMERATE 50

namespace physics {

class Clock : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int framerate READ framerate WRITE setFramerate)

public:
    explicit Clock(int framerate = DEFAULT_FRAMERATE);
    int framerate() const;
    void setFramerate(int);

signals:
    void update(int delta_t_msec);

public slots:
    void start();
    void stop();
    void tick();

private:
    QTimer timer;
    QTime lastStartTime;
};

} // end namespace physics

#endif // CLOCK_H
