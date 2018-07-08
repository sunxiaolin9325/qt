#ifndef FIRSTDIALOG_H
#define FIRSTDIALOG_H

#include <QDialog>

namespace Ui {
class FirstDialog;
}

class FirstDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FirstDialog(QWidget *parent = 0);
    ~FirstDialog();

signals:
    aSignal(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::FirstDialog *ui;
};

#endif // FIRSTDIALOG_H
