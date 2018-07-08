#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
    fDialog = new FirstDialog();
    connect(fDialog, SIGNAL(aSignal(const QString)), this, SLOT(aSlot(const QString)));
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_clicked()
{
    fDialog->show();
}

void HomePage::aSlot(const QString str)
{
    ui->label->setText(str);
}
