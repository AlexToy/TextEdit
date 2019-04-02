#include "browsfile.h"

BrowsFile::BrowsFile()
{

}

void BrowsFile::openFile()
{
    setFileMode(QFileDialog::ExistingFile);
    setNameFilter("Tous les fichiers (*.*)");
    setViewMode(QFileDialog::List);
    setAcceptMode(QFileDialog::AcceptOpen);
    setLabelText(QFileDialog::LookIn, "Regardez dans :");
    setLabelText(QFileDialog::FileName, "Nom de fichier :");
    setLabelText(QFileDialog::FileType, "Type de fichiers :");
    setLabelText(QFileDialog::Accept, "Sélectionner");
    setLabelText(QFileDialog::Reject, "Annuler");
    QStringList fileNames;

    if(exec())
    {
        fileNames = selectedFiles();
        //lineEdit_chemin->setText(fileNames.at(0));
        fileNames.removeAt(0);
    }
    else
        reject();
}
