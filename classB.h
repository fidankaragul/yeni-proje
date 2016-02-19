#ifndef CLASSB_H
#define CLASSB_H

#include <QObject>
#include "constants.h"

class ClassB : public QObject
{
    Q_OBJECT
public:
    explicit ClassB(QObject *parent = 0);

signals:

public slots:
    void functionClassB(myType pMyType);
};

#endif // CLASSB_H
