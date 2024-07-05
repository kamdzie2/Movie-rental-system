#include "ocena_okno.h"
#include "ui_ocena_okno.h"
#include "listy.h"

ocena_okno::ocena_okno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ocena_okno)
{
    ui->setupUi(this);
    lista2=zrobliste("dane.txt");
}

ocena_okno::~ocena_okno()
{
    sortowaniekoncowe(lista2);
    zapisdopliku(lista2);
    usun(lista2);
    delete lista2;
    delete ui;
}

void ocena_okno::on_pushButton_5_clicked()
{
    int n=5;
    QString nazwa;
    nazwa=ui->lineEdit_nazwa->text();
    bool jest=ocena1(lista2,nazwa,n);
    if(jest==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("W bibliotece nie ma takiego filmu"));
        return;
    }
    else if(jest==true)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Pomyślnie oceniono film "));
        this->close();
    }
}

void ocena_okno::on_pushButton_4_clicked()
{
    int n=4;
    QString nazwa;
    nazwa=ui->lineEdit_nazwa->text();
    bool jest=ocena1(lista2,nazwa,n);
    if(jest==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("W bibliotece nie ma takiego filmu"));
        return;
    }
    else if(jest==true)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Pomyślnie oceniono film "));
        this->close();
    }
}

void ocena_okno::on_pushButton_3_clicked()
{
    int n=3;
    QString nazwa;
    nazwa=ui->lineEdit_nazwa->text();
    bool jest=ocena1(lista2,nazwa,n);
    if(jest==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("W bibliotece nie ma takiego filmu"));
        return;
    }
    else if(jest==true)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Pomyślnie oceniono film "));
        this->close();
    }
}

void ocena_okno::on_pushButton_2_clicked()
{
    int n=2;
    QString nazwa;
    nazwa=ui->lineEdit_nazwa->text();
    bool jest=ocena1(lista2,nazwa,n);
    if(jest==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("W bibliotece nie ma takiego filmu"));
        return;
    }
    else if(jest==true)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Pomyślnie oceniono film "));
        this->close();
    }
}

void ocena_okno::on_pushButton_1_clicked()
{
    int n=1;
    QString nazwa;
    nazwa=ui->lineEdit_nazwa->text();
    bool jest=ocena1(lista2,nazwa,n);
    if(jest==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("W bibliotece nie ma takiego filmu"));
        return;
    }
    else if(jest==true)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Pomyślnie oceniono film "));
        this->close();
    }
}
