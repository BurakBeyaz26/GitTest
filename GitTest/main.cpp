#include <QCoreApplication>
#include "testclass.h"
#include "mainclass.h"
#include "workclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestClass testclass;
    testclass.helloGit();

    MainClass mainclass;

    WorkClass workclass;
    workclass.startWork();

    return a.exec();
}
