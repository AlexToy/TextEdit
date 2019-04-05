#ifndef START_WINDOW_H
#define START_WINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QHBoxLayout>

class Start_window : public QHBoxLayout
{
    Q_OBJECT
public:
    Start_window();

private:
    QLabel *label_logo;
    QPixmap *pixmap_logo;

};

#endif // START_WINDOW_H
