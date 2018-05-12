#include <QCoreApplication>
#include <child.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    child ob(5, 10);
    ob.printHair();
    return a.exec();
}
