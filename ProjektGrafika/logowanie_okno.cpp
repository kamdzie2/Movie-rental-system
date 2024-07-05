#include "logowanie_okno.h"
#include "ui_logowanie_okno.h"
#include "listy.h"

bool zalogowanie=false;

logowanie_okno::logowanie_okno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logowanie_okno)
{
    ui->setupUi(this);
}

logowanie_okno::~logowanie_okno()
{
    delete ui;
}

void logowanie_okno::on_pushButton_L_clicked()
{
    QString login;
    QString haslo;
    login=ui->lineEdit_loginL->text();
    haslo=ui->lineEdit_hasloL->text();
    bool q=logowanie(login,haslo);

    if(q==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Niepoprawne dane"));
        return;
    }
    else if(q==true)
    {
        zalogowanie=true;
        this->close();
    }
}
