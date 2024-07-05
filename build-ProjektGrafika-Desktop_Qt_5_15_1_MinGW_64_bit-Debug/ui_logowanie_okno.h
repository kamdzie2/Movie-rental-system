/********************************************************************************
** Form generated from reading UI file 'logowanie_okno.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOWANIE_OKNO_H
#define UI_LOGOWANIE_OKNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_logowanie_okno
{
public:
    QPushButton *pushButton_L;
    QLineEdit *lineEdit_loginL;
    QLabel *label;
    QLineEdit *lineEdit_hasloL;
    QLabel *label_2;

    void setupUi(QDialog *logowanie_okno)
    {
        if (logowanie_okno->objectName().isEmpty())
            logowanie_okno->setObjectName(QString::fromUtf8("logowanie_okno"));
        logowanie_okno->resize(340, 162);
        pushButton_L = new QPushButton(logowanie_okno);
        pushButton_L->setObjectName(QString::fromUtf8("pushButton_L"));
        pushButton_L->setGeometry(QRect(130, 110, 75, 23));
        lineEdit_loginL = new QLineEdit(logowanie_okno);
        lineEdit_loginL->setObjectName(QString::fromUtf8("lineEdit_loginL"));
        lineEdit_loginL->setGeometry(QRect(90, 30, 151, 20));
        label = new QLabel(logowanie_okno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 47, 13));
        lineEdit_hasloL = new QLineEdit(logowanie_okno);
        lineEdit_hasloL->setObjectName(QString::fromUtf8("lineEdit_hasloL"));
        lineEdit_hasloL->setGeometry(QRect(90, 70, 151, 20));
        lineEdit_hasloL->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(logowanie_okno);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 50, 71, 16));

        retranslateUi(logowanie_okno);

        QMetaObject::connectSlotsByName(logowanie_okno);
    } // setupUi

    void retranslateUi(QDialog *logowanie_okno)
    {
        logowanie_okno->setWindowTitle(QCoreApplication::translate("logowanie_okno", "Dialog", nullptr));
        pushButton_L->setText(QCoreApplication::translate("logowanie_okno", "Zaloguj", nullptr));
        label->setText(QCoreApplication::translate("logowanie_okno", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("logowanie_okno", "Has\305\202o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logowanie_okno: public Ui_logowanie_okno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOWANIE_OKNO_H
