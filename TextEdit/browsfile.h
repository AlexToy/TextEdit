#ifndef BROWSFILE_H
#define BROWSFILE_H

#include <QFileDialog>
#include <QStringList>
#include <QObject>
#include <QDebug>

class BrowsFile : public QFileDialog
{
    Q_OBJECT
public:
    BrowsFile();

public slots:
    void openFile();

};

#endif // BROWSFILE_H
