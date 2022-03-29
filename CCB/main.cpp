#include "ccb.h"

#include <QApplication>


extern int test_hid(int argc, char* argv[]);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ccb w;
    test_hid(argc,argv);
    w.show();
    return a.exec();
}
