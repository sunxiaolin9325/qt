/********************************************************************************
** Form generated from reading UI file 'firstdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTDIALOG_H
#define UI_FIRSTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FirstDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;

    void setupUi(QDialog *FirstDialog)
    {
        if (FirstDialog->objectName().isEmpty())
            FirstDialog->setObjectName(QStringLiteral("FirstDialog"));
        FirstDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(FirstDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 201, 161, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(FirstDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 50, 141, 71));

        retranslateUi(FirstDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FirstDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FirstDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FirstDialog);
    } // setupUi

    void retranslateUi(QDialog *FirstDialog)
    {
        FirstDialog->setWindowTitle(QApplication::translate("FirstDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("FirstDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstDialog: public Ui_FirstDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTDIALOG_H
