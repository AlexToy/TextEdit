#include "start_window.h"

Start_window::Start_window()
{
    label_logo = new QLabel;
    pixmap_logo = new QPixmap("/Users/alexandreharistoy/Documents/QtProgram/TextEdit/TextEdit/logoS.png");

    label_logo->setPixmap(*pixmap_logo);
    addWidget(label_logo);
}
