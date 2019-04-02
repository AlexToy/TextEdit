#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QLayout>
#include <QObject>

#include "browsfile.h"

class Main_window : public QMainWindow
{
    Q_OBJECT
public:
    Main_window();

private:
    QPushButton *openBrows;
    QWidget *windows;
    QHBoxLayout *layout;

};

#endif // MAIN_WINDOW_H
