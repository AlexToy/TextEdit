#include "browsfile.h"

BrowsFile::BrowsFile()
{

}

void BrowsFile::openFile()
{
    QString path_file = QFileDialog::getOpenFileName(this,"Open file","/home","Text(*.txt)");
    qDebug() << "File's path" << path_file;

    editFile(path_file);
}

void BrowsFile::editFile(QString path_file)
{
    QString buffer;
    unsigned short line_nb = 0;
    QString line;
    QFile file(path_file);
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream flux(&file);
    flux.setCodec("UTF-16");

    while(!flux.atEnd())
    {
        line_nb ++;
        line = flux.readLine();
        line = delete_charactere(line,"/");
        buffer += line + "\n";
    }
    file.resize(0);  //delete the original file
    flux << buffer;  //write the new data in the file
    file.close();
}

QString BrowsFile::delete_charactere(QString line, QString character)
{
    unsigned short i, pos_charactere;
    for(i=0; line[i] != "\t"; i++)
    {
        if(line[i] == character)
        {
            for(pos_charactere=i; line[pos_charactere] != 0; pos_charactere++)
                line[pos_charactere] = line[pos_charactere + 1];
        }
    }
    return line;
}
