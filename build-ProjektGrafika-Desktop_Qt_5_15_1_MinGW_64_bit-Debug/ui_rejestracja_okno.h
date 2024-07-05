/********************************************************************************
** Form generated from reading UI file 'rejestracja_okno.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REJESTRACJA_OKNO_H
#define UI_REJESTRACJA_OKNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_rejestracja_okno
{
public:
    QLineEdit *lineEdit_loginR;
    QLabel *label;
    QLineEdit *lineEdit_hasloR;
    QLabel *label_2;
    QPushButton *pushButton_R;

    void setupUi(QDialog *rejestracja_okno)
    {
        if (rejestracja_okno->objectName().isEmpty())
            rejestracja_okno->setObjectName(QString::fromUtf8("rejestracja_okno"));
        rejestracja_okno->resize(268, 153);
        lineEdit_loginR = new QLineEdit(rejestracja_okno);
        lineEdit_loginR->setObjectName(QString::fromUtf8("lineEdit_loginR"));
        lineEdit_loginR->setGeometry(QRect(50, 40, 161, 21));
        label = new QLabel(rejestracja_okno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 41, 20));
        lineEdit_hasloR = new QLineEdit(rejestracja_okno);
        lineEdit_hasloR->setObjectName(QString::fromUtf8("lineEdit_hasloR"));
        lineEdit_hasloR->setGeometry(QRect(50, 90, 161, 20));
        lineEdit_hasloR->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(rejestracja_okno);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 47, 13));
        pushButton_R = new QPushButton(rejestracja_okno);
        pushButton_R->setObjectName(QString::fromUtf8("pushButton_R"));
        pushButton_R->setGeometry(QRect(90, 120, 75, 23));

        retranslateUi(rejestracja_okno);

        QMetaObject::connectSlotsByName(rejestracja_okno);
    } // setupUi

    void retranslateUi(QDialog *rejestracja_okno)
    {
        rejestracja_okno->setWindowTitle(QCoreApplication::translate("rejestracja_okno", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("rejestracja_okno", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("rejestracja_okno", "Has\305\202o", nullptr));
        pushButton_R->setText(QCoreApplication::translate("rejestracja_okno", "Zarejestruj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rejestracja_okno: public Ui_rejestracja_okno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REJESTRACJA_OKNO_H
