/********************************************************************************
** Form generated from reading UI file 'ocena_okno.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCENA_OKNO_H
#define UI_OCENA_OKNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ocena_okno
{
public:
    QLineEdit *lineEdit_nazwa;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QLabel *label_2;

    void setupUi(QDialog *ocena_okno)
    {
        if (ocena_okno->objectName().isEmpty())
            ocena_okno->setObjectName(QString::fromUtf8("ocena_okno"));
        ocena_okno->resize(314, 169);
        lineEdit_nazwa = new QLineEdit(ocena_okno);
        lineEdit_nazwa->setObjectName(QString::fromUtf8("lineEdit_nazwa"));
        lineEdit_nazwa->setGeometry(QRect(60, 60, 191, 21));
        label = new QLabel(ocena_okno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 81, 16));
        pushButton_5 = new QPushButton(ocena_okno);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 120, 31, 31));
        pushButton_4 = new QPushButton(ocena_okno);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 120, 31, 31));
        pushButton_3 = new QPushButton(ocena_okno);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 120, 31, 31));
        pushButton_2 = new QPushButton(ocena_okno);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 120, 31, 31));
        pushButton_1 = new QPushButton(ocena_okno);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(220, 120, 31, 31));
        label_2 = new QLabel(ocena_okno);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 100, 47, 13));

        retranslateUi(ocena_okno);

        QMetaObject::connectSlotsByName(ocena_okno);
    } // setupUi

    void retranslateUi(QDialog *ocena_okno)
    {
        ocena_okno->setWindowTitle(QCoreApplication::translate("ocena_okno", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ocena_okno", "Nazwa filmu", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ocena_okno", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ocena_okno", "4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ocena_okno", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ocena_okno", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("ocena_okno", "1", nullptr));
        label_2->setText(QCoreApplication::translate("ocena_okno", "Ocena:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ocena_okno: public Ui_ocena_okno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCENA_OKNO_H
