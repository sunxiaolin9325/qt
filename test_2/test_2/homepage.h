#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include "firstdialog.h"

namespace Ui {
class HomePage;
}

class HomePage : public QWidget
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = 0);
    ~HomePage();

private slots:
    void on_pushButton_clicked();
    void aSlot(const QString str);

private:
    Ui::HomePage *ui;
    FirstDialog *fDialog;
};

#endif // HOMEPAGE_H
