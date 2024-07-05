/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pbZaloguj;
    QPushButton *pbZarejestruj;
    QPushButton *pbWyloguj;
    QPushButton *pbWyswietl;
    QPushButton *pbDodaj;
    QLineEdit *lineEdit;
    QGroupBox *gbSortowanie;
    QRadioButton *rbAlfabet;
    QRadioButton *rbOcena;
    QRadioButton *rbLwys;
    QPushButton *pbWypozycz;
    QPushButton *pb_Oddaj;
    QPushButton *pb_Wyszukaj;
    QPushButton *pb_Ocen;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(793, 396);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pbZaloguj = new QPushButton(centralwidget);
        pbZaloguj->setObjectName(QString::fromUtf8("pbZaloguj"));
        pbZaloguj->setGeometry(QRect(600, 300, 75, 23));
        pbZarejestruj = new QPushButton(centralwidget);
        pbZarejestruj->setObjectName(QString::fromUtf8("pbZarejestruj"));
        pbZarejestruj->setGeometry(QRect(690, 300, 75, 23));
        pbWyloguj = new QPushButton(centralwidget);
        pbWyloguj->setObjectName(QString::fromUtf8("pbWyloguj"));
        pbWyloguj->setGeometry(QRect(640, 330, 75, 23));
        pbWyswietl = new QPushButton(centralwidget);
        pbWyswietl->setObjectName(QString::fromUtf8("pbWyswietl"));
        pbWyswietl->setGeometry(QRect(40, 330, 81, 23));
        pbDodaj = new QPushButton(centralwidget);
        pbDodaj->setObjectName(QString::fromUtf8("pbDodaj"));
        pbDodaj->setGeometry(QRect(300, 300, 81, 23));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 240, 231, 21));
        gbSortowanie = new QGroupBox(centralwidget);
        gbSortowanie->setObjectName(QString::fromUtf8("gbSortowanie"));
        gbSortowanie->setGeometry(QRect(20, 210, 131, 111));
        rbAlfabet = new QRadioButton(gbSortowanie);
        rbAlfabet->setObjectName(QString::fromUtf8("rbAlfabet"));
        rbAlfabet->setGeometry(QRect(10, 20, 101, 17));
        rbOcena = new QRadioButton(gbSortowanie);
        rbOcena->setObjectName(QString::fromUtf8("rbOcena"));
        rbOcena->setGeometry(QRect(10, 80, 82, 17));
        rbLwys = new QRadioButton(gbSortowanie);
        rbLwys->setObjectName(QString::fromUtf8("rbLwys"));
        rbLwys->setGeometry(QRect(10, 50, 82, 17));
        pbWypozycz = new QPushButton(centralwidget);
        pbWypozycz->setObjectName(QString::fromUtf8("pbWypozycz"));
        pbWypozycz->setGeometry(QRect(410, 300, 81, 23));
        pb_Oddaj = new QPushButton(centralwidget);
        pb_Oddaj->setObjectName(QString::fromUtf8("pb_Oddaj"));
        pb_Oddaj->setGeometry(QRect(410, 270, 81, 23));
        pb_Wyszukaj = new QPushButton(centralwidget);
        pb_Wyszukaj->setObjectName(QString::fromUtf8("pb_Wyszukaj"));
        pb_Wyszukaj->setGeometry(QRect(300, 270, 81, 23));
        pb_Ocen = new QPushButton(centralwidget);
        pb_Ocen->setObjectName(QString::fromUtf8("pb_Ocen"));
        pb_Ocen->setGeometry(QRect(350, 330, 91, 23));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 751, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 793, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pbZaloguj->setText(QCoreApplication::translate("MainWindow", "Zaloguj", nullptr));
        pbZarejestruj->setText(QCoreApplication::translate("MainWindow", "Zarejestruj ", nullptr));
        pbWyloguj->setText(QCoreApplication::translate("MainWindow", "Wyloguj", nullptr));
        pbWyswietl->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl filmy", nullptr));
        pbDodaj->setText(QCoreApplication::translate("MainWindow", "Dodaj filmy", nullptr));
        gbSortowanie->setTitle(QCoreApplication::translate("MainWindow", "Sortowanie", nullptr));
        rbAlfabet->setText(QCoreApplication::translate("MainWindow", "Alfabetycznie", nullptr));
        rbOcena->setText(QCoreApplication::translate("MainWindow", "Ocena", nullptr));
        rbLwys->setText(QCoreApplication::translate("MainWindow", "Liczba wys.", nullptr));
        pbWypozycz->setText(QCoreApplication::translate("MainWindow", "Wypo\305\274ycz film", nullptr));
        pb_Oddaj->setText(QCoreApplication::translate("MainWindow", "Oddaj film", nullptr));
        pb_Wyszukaj->setText(QCoreApplication::translate("MainWindow", "Wyszukaj film", nullptr));
        pb_Ocen->setText(QCoreApplication::translate("MainWindow", "Oce\305\204 film", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
