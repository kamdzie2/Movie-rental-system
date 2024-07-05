#include "rejestracja_okno.h"
#include "ui_rejestracja_okno.h"
#include "listy.h"


rejestracja_okno::rejestracja_okno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rejestracja_okno)
{
    ui->setupUi(this);
}

rejestracja_okno::~rejestracja_okno()
{
    delete ui;
}

void rejestracja_okno::on_pushButton_R_clicked()
{
    QString login;
    QString haslo;
    login=ui->lineEdit_loginR->text();
    haslo=ui->lineEdit_hasloR->text();
    Login_rejestr l=sprawdzenie_login(login);
    Haslo_rejestr h=sprawdzenie_haslo(haslo);
    if(h.cyfryh==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Hasło musi zawierać cyfry"));
        return;
    }else if (h.dlugosch==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Hasło nie może zawierać więcej niż 15 znaków"));
        return;
    }else if(h.duzeh==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Hasło musi zawierać duże litery"));
        return;
    }else if (h.pusteh==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Hasło nie może zawierać spacji"));
        return;
    }else if (l.dlugoscl==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Login nie może zawierać więcej niż 10 znaków"));
        return;
    }else if(l.pustel==false)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Login nie może zawierać spacji"));
        return;
    }else if (l.zajetel==true)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Login zajęty"));
        return;
    }else
    {
        rejestracja(login,haslo);
       this->close();
    }
}
