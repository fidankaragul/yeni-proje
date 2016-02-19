#include "classA.h"
#include "ui_classA.h"
#include <iostream>

using namespace std;

ClassA::ClassA(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClassA)
{
    ui->setupUi(this);

    std::cout<<"ClassA thread ID: "<< QThread::currentThreadId()<<std::endl;

    qRegisterMetaType<myType>("myType");

    mClassB = new ClassB();

    mClassB->moveToThread(&mWorkerThread);
    mWorkerThread.start();

    connect(this, SIGNAL(callFunctionClassB(myType)), mClassB, SLOT(functionClassB(myType)));
}

ClassA::~ClassA()
{
    delete ui;
}

void ClassA::on_pushButton_Type1_clicked()
{
    emit callFunctionClassB(MY_TYPE_1);
}

void ClassA::on_pushButton_Type2_clicked()
{
    emit callFunctionClassB(MY_TYPE_2);
}
