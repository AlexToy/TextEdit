#include <QApplication>
#include <QtWidgets>

#include "main_window.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Main_window fenetre;
    fenetre.show();

    return app.exec();
}
