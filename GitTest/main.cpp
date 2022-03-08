#include <QCoreApplication>
#include "testclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestClass testclass;
    testclass.helloGit();

    return a.exec();
}
