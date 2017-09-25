#anthor    flyfish002
#date      2017/09/25
#version   QT 5.5.0 msvc 2013,32bit
#reason    just for  QTdemo1  test
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
