#ifndef SETTINGS_DIALOG_H
#define SETTINGS_DIALOG_H

#include <QDialog>

namespace Ui {
    class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();

    QString directoryPath() const;
    void setDirectoryPath(const QString& dir);

private slots:
    void browseDir();

private:
    Ui::SettingsDialog *ui;
};

#endif // SETTINGS_DIALOG_H
