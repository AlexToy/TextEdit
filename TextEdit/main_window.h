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
    QHBoxLayout *layout;
    QPushButton *openBrows;
    BrowsFile *browsFile;
    QWidget *space;

};

#endif // MAIN_WINDOW_H
