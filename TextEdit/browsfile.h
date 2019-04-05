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
    void editFile(QString path_file);
    QString delete_charactere(QString line, QString character);
};

#endif // BROWSFILE_H
