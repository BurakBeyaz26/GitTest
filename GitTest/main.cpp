#include <QCoreApplication>
#include "testclass.h"
#include "mainclass.h"
#include "workclass.h"
#include "mergeclass1.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestClass testclass;
    testclass.helloGit();

    MainClass mainclass;

    WorkClass workclass;
    workclass.startWork();

    MergeClass1 mergeclass1;
    mergeclass1.testMessage();

    return a.exec();
}
