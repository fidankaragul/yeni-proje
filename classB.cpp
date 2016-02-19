#include "classB.h"
#include <iostream>
#include <QThread>

using namespace  std;

ClassB::ClassB(QObject *parent) : QObject(parent)
{

}

void ClassB::functionClassB(myType pMyType)
{
    std::cout<<"ClassB thread ID: "<<QThread::currentThreadId()<<std::endl;
    std::cout<<"Received parameter value: "<<pMyType<<std::endl;
}

