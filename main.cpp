#include <QtGui/QApplication>
#include "wantlist.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WantList w;
    w.show();
    return a.exec();
}
