#ifndef WINDOW_H
#define WINDOW_H

#include "../abstractwidget.h"

class Window : public AbstractWidget
{
    void initPalette();
    void paintEvent(QPaintEvent *event);
public:
    Window();

};

#endif // WINDOW_H
