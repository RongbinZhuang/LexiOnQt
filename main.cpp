//#define _TEST_

#ifndef _TEST_

#include <iostream>
#include <QApplication>
#include "display/window/window.h"

int main(int argc,char ** argv)
{
    QApplication app(argc,argv);
    Window win;
    win.show();
    return app.exec();

}

#else


#endif
