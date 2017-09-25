#include "window.h"

Window::Window():
    AbstractWidget()
{
    setWindowFlags(Qt::CustomizeWindowHint);
    initPalette();
}

void Window::paintEvent(QPaintEvent *event){
    
}

void Window::initPalette(){
    QPalette pal;
    pal.setColor(QPalette::Background,QColor(0,0,170));
    setAutoFillBackground(true);
    setPalette(pal);
    setWindowOpacity(0.5);
}
