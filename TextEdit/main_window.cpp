#include "main_window.h"

Main_window::Main_window()
{
    layout = new QHBoxLayout;
    windows = new QWidget(this);
    openBrows = new QPushButton;

    layout->addWidget(openBrows);
    windows->setLayout(layout);
    setCentralWidget(windows);
}
