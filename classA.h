#ifndef CLASSA_H
#define CLASSA_H

#include <QMainWindow>
#include "constants.h"
#include "classB.h"
#include <QThread>

namespace Ui {

Q_DECLARE_METATYPE(myType)

class ClassA;
}

class ClassA : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClassA(QWidget *parent = 0);
    ~ClassA();

private slots:


    void on_pushButton_Type1_clicked();

    void on_pushButton_Type2_clicked();

private:
    Ui::ClassA *ui;
    ClassB* mClassB;
    QThread mWorkerThread;

signals:
    void callFunctionClassB(myType pMyType);

};

#endif // CLASSA_H
