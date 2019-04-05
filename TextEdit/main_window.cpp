#include "main_window.h"

Main_window::Main_window()
{
    space = new QWidget;
    layout = new QHBoxLayout;
    openBrows = new QPushButton("Open");
    browsFile = new BrowsFile;

    layout->addWidget(openBrows);
    space->setLayout(layout);
    setCentralWidget(space);

    QObject::connect(openBrows,SIGNAL(clicked()),browsFile,SLOT(openFile()));
}
