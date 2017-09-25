//#define _TEST_

#ifndef _TEST_

#include <iostream>
#include <QApplication>
#include <QWidget>
#include "abstract/abstractwidget.h"

int main(int argc,char ** argv)
{
    QApplication app(argc,argv);
    Qt::WindowFlags flags=0;
    flags=Qt::CustomizeWindowHint | Qt::Window;

    AbstractWidget win;

    win.setWindowFlags(flags);
    win.show();
    return app.exec();

}

#else


#endif
