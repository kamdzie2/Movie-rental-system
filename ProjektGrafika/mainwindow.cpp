#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "listy.h"
#include <QAbstractItemModel>
#include "rejestracja_okno.h"
#include "logowanie_okno.h"
#include "ocena_okno.h"



string log;

bool wyszukaj_bool=false;
bool dodaj_bool=false;
bool oddaj_bool=false;
bool wypozycz_bool=false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    lista1=zrobliste("dane.txt");
}

MainWindow::~MainWindow()
{
    sortowaniekoncowe(lista1);
    zapisdopliku(lista1);

    usun(lista1);
    delete lista1;
    delete ui;
}



void MainWindow::wypiszlisteodpoczatku()
{
    ui->tableWidget->horizontalHeader()->setVisible(true);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(policz(lista1)-1);

    int i=0;
    ui->tableWidget->clear();
    lista *adr = lista1->nast;
    if(adr==0)
    {
        stringstream slw;
        slw<<adr->film.lwys;
        string lwySTR=slw.str();

        stringstream soc;
        soc<<fixed<<setprecision(1)<<adr->film.sr;
        string ocSTR=soc.str();

        QString nazwaf = QString::fromStdString(adr->film.nazwa);
        QString wypf = QString::fromStdString(adr->film.wypoz);
        QString czyjf = QString::fromStdString(adr->film.czyjfilm);
        QString ocenf = QString::fromStdString(ocSTR);
        QString lwysf = QString::fromStdString(lwySTR);

        QTableWidgetItem *nazwa= new QTableWidgetItem(QString(nazwaf));
        QTableWidgetItem *liczbawys= new QTableWidgetItem(QString(lwysf));
        QTableWidgetItem *wypoz= new QTableWidgetItem(QString(wypf));
        QTableWidgetItem *czyj= new QTableWidgetItem(QString(czyjf));
        QTableWidgetItem *ocena= new QTableWidgetItem(QString(ocenf));
        ui->tableWidget->setItem(i,0,nazwa);
        ui->tableWidget->setItem(i,1,liczbawys);
        ui->tableWidget->setItem(i,2,wypoz);
        ui->tableWidget->setItem(i,3,czyj);
        ui->tableWidget->setItem(i,4,ocena);
    }
    while(adr!=0)
    {
    stringstream slw;
    slw<<adr->film.lwys;
    string lwySTR=slw.str();

    stringstream soc;
    soc<<fixed<<setprecision(1)<<adr->film.sr;
    string ocSTR=soc.str();

    QString nazwaf = QString::fromStdString(adr->film.nazwa);
    QString wypf = QString::fromStdString(adr->film.wypoz);
    QString czyjf = QString::fromStdString(adr->film.czyjfilm);
    QString ocenf = QString::fromStdString(ocSTR);
    QString lwysf = QString::fromStdString(lwySTR);

    QTableWidgetItem *nazwa= new QTableWidgetItem(QString(nazwaf));
    QTableWidgetItem *liczbawys= new QTableWidgetItem(QString(lwysf));
    QTableWidgetItem *wypoz= new QTableWidgetItem(QString(wypf));
    QTableWidgetItem *czyj= new QTableWidgetItem(QString(czyjf));
    QTableWidgetItem *ocena= new QTableWidgetItem(QString(ocenf));
    ui->tableWidget->setItem(i,0,nazwa);
    ui->tableWidget->setItem(i,1,liczbawys);
    ui->tableWidget->setItem(i,2,wypoz);
    ui->tableWidget->setItem(i,3,czyj);
    ui->tableWidget->setItem(i,4,ocena);
    i++;
    adr = adr->nast;

    }
    QTableWidgetItem *header1 = new QTableWidgetItem();
    header1->setText("Nazwa filmu");
    ui->tableWidget->setHorizontalHeaderItem(0,header1);

    QTableWidgetItem *header2 = new QTableWidgetItem();
    header2->setText("Liczba wyświetleń");
    ui->tableWidget->setHorizontalHeaderItem(1,header2);

    QTableWidgetItem *header3 = new QTableWidgetItem();
    header3->setText("Wypożyczony");
    ui->tableWidget->setHorizontalHeaderItem(2,header3);

    QTableWidgetItem *header4 = new QTableWidgetItem();
    header4->setText("Przez kogo wypożyczony");
    ui->tableWidget->setHorizontalHeaderItem(3,header4);

    QTableWidgetItem *header5 = new QTableWidgetItem();
    header5->setText("Ocena");
    ui->tableWidget->setHorizontalHeaderItem(4,header5);

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}
void MainWindow::wypiszliste()
{
    if(ui->rbAlfabet->isChecked())
    {

        sortowanie(lista1);
        wypiszlisteodpoczatku();
    }
    else if(ui->rbLwys->isChecked())
    {

        sortowanielwys(lista1);
        wypiszlisteodpoczatku();
    }
    else if(ui->rbOcena->isChecked())
    {

        sortowanieocena(lista1);
        wypiszlisteodpoczatku();
    }
    else
    {

        wypiszlisteodpoczatku();

    }

}
void MainWindow::on_pbWyswietl_clicked()
{
    wypiszliste();
}
void MainWindow::on_rbLwys_clicked()
{
    wypiszliste();

}
void MainWindow::on_rbAlfabet_clicked()
{
    wypiszliste();

}
void MainWindow::on_rbOcena_clicked()
{
    wypiszliste();

}


void MainWindow::on_pbDodaj_clicked()
{
    dodaj_bool=true;
    string nazwa=ui->lineEdit->text().toStdString();
    dodanofilm q=dodaj(lista1,nazwa);
    wypiszlisteodpoczatku();
    ui->lineEdit->clear();
    if(q.pustepole==false && q.rownanazwa==false)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Pomyślnie dodano film do bilbioteki"));
    }
    else if(q.rownanazwa==true)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Nazwy filmów nie mogą się powtarzać"));
    }
    else if (q.pustepole==true)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Nazwa filmu musi zawierać znaki"));
    }
}

void MainWindow::on_pb_Wyszukaj_clicked()
{
    wyszukaj_bool=true;
    string nazwa= ui->lineEdit->text().toStdString();
    Dane p= szukaj(lista1,nazwa);
    if(p.nazwa.empty())
    {
        ui->statusbar->showMessage(QString::fromUtf8("Nie znaleziono filmu"));
    }
    else
    {
        ui->tableWidget->clear();
        stringstream slw;
        slw<<p.lwys;
        string lwySTR=slw.str();

        stringstream soc;
        soc<<fixed<<setprecision(1)<<p.sr;
        string ocSTR=soc.str();

        QString nazwaf = QString::fromStdString(p.nazwa);
        QString wypf = QString::fromStdString(p.wypoz);
        QString czyjf = QString::fromStdString(p.czyjfilm);
        QString ocenf = QString::fromStdString(ocSTR);
        QString lwysf = QString::fromStdString(lwySTR);

        QTableWidgetItem *nazwa= new QTableWidgetItem(QString(nazwaf));
        QTableWidgetItem *liczbawys= new QTableWidgetItem(QString(lwysf));
        QTableWidgetItem *wypoz= new QTableWidgetItem(QString(wypf));
        QTableWidgetItem *czyj= new QTableWidgetItem(QString(czyjf));
        QTableWidgetItem *ocena= new QTableWidgetItem(QString(ocenf));
        ui->tableWidget->setItem(0,0,nazwa);
        ui->tableWidget->setItem(0,1,liczbawys);
        ui->tableWidget->setItem(0,2,wypoz);
        ui->tableWidget->setItem(0,3,czyj);
        ui->tableWidget->setItem(0,4,ocena);
    }
    ui->lineEdit->clear();

}
void MainWindow::on_pbWypozycz_clicked()
{
    if(zalogowanie==true)
    {
    wypozycz_bool=true;

    string nazwa=ui->lineEdit->text().toStdString();
    listauz=zroblist();
    Wypozycz w=wypozyczenie(lista1,listauz,nazwa);
    ui->lineEdit->clear();

    if(w.czyjest==false)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Nie ma takiego filmu"));
    }else if(w.czymax==true)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Możesz posiadać maksymalnie 5 filmów"));
    }else if (w.czyzajete==true)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Film został już wypożyczony przez innego użytkownika"));
    }else if (w.udalosie==true)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Pomyślnie przypisano film do twojego konta"));
    }else if (w.czymoj==true)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Ten film jest już przypisany do twojego konta"));
    }
    usunuzyt(listauz);
    zapisdopliku(lista1);
    }else if (zalogowanie==false)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Musisz się zalogować"));
    }
    wypiszlisteodpoczatku();

}

void MainWindow::on_lineEdit_returnPressed()
{
    if (wyszukaj_bool==true)
    {
        string nazwa= ui->lineEdit->text().toStdString();
        Dane p= szukaj(lista1,nazwa);
        if(p.nazwa.empty())
        {
            ui->statusbar->showMessage(QString::fromUtf8("Nie znaleziono filmu"));
        }
        else
        {
            ui->tableWidget->clear();
            stringstream slw;
            slw<<p.lwys;
            string lwySTR=slw.str();

            stringstream soc;
            soc<<fixed<<setprecision(1)<<p.sr;
            string ocSTR=soc.str();

            QString nazwaf = QString::fromStdString(p.nazwa);
            QString wypf = QString::fromStdString(p.wypoz);
            QString czyjf = QString::fromStdString(p.czyjfilm);
            QString ocenf = QString::fromStdString(ocSTR);
            QString lwysf = QString::fromStdString(lwySTR);

            QTableWidgetItem *nazwa= new QTableWidgetItem(QString(nazwaf));
            QTableWidgetItem *liczbawys= new QTableWidgetItem(QString(lwysf));
            QTableWidgetItem *wypoz= new QTableWidgetItem(QString(wypf));
            QTableWidgetItem *czyj= new QTableWidgetItem(QString(czyjf));
            QTableWidgetItem *ocena= new QTableWidgetItem(QString(ocenf));
            ui->tableWidget->setItem(0,0,nazwa);
            ui->tableWidget->setItem(0,1,liczbawys);
            ui->tableWidget->setItem(0,2,wypoz);
            ui->tableWidget->setItem(0,3,czyj);
            ui->tableWidget->setItem(0,4,ocena);
        }
        ui->lineEdit->clear();
        wyszukaj_bool=false;
    }
    else if(dodaj_bool==true)
    {
        string nazwa=ui->lineEdit->text().toStdString();

        dodanofilm q=dodaj(lista1,nazwa);
        wypiszlisteodpoczatku();
        ui->lineEdit->clear();
        if(q.pustepole==false && q.rownanazwa==false)
        {
            ui->statusbar->showMessage(QString::fromUtf8("Pomyślnie dodano film do bilbioteki"));
        }
        else if(q.rownanazwa==true)
        {
            ui->statusbar->showMessage(QString::fromUtf8("Nazwy filmów nie mogą się powtarzać"));
        }
        else if (q.pustepole==true)
        {
            ui->statusbar->showMessage(QString::fromUtf8("Nazwa filmu musi zawierać znaki"));
        }
     dodaj_bool=false;
    }
    else if(wypozycz_bool==true)
    {
        if(zalogowanie==true)
        {
            string nazwa=ui->lineEdit->text().toStdString();
            listauz=zroblist();
            Wypozycz w=wypozyczenie(lista1,listauz,nazwa);
            ui->lineEdit->clear();
            if(w.czyjest==false)
            {
                ui->statusbar->showMessage(QString::fromUtf8("Nie ma takiego filmu"));
            }else if(w.czymax==true)
            {
                ui->statusbar->showMessage(QString::fromUtf8("Możesz posiadać maksymalnie 5 filmów"));
            }else if (w.czyzajete==true)
            {
                ui->statusbar->showMessage(QString::fromUtf8("Film został już wypożyczony przez innego użytkownika"));
            }else if (w.udalosie==true)
            {
                ui->statusbar->showMessage(QString::fromUtf8("Pomyślnie przypisano film do twojego konta"));
            }else if (w.czymoj==true)
            {
                ui->statusbar->showMessage(QString::fromUtf8("Ten film jest już przypisany do twojego konta"));
            }
            usunuzyt(listauz);
            zapisdopliku(lista1);

        }else if (zalogowanie==false)
        {
            ui->statusbar->showMessage(QString::fromUtf8("Musisz się zalogować"));
        }
        wypozycz_bool=false;
        wypiszlisteodpoczatku();
    }
    else if(oddaj_bool==true)
    {
        if(zalogowanie==true)
        {
        string nazwa=ui->lineEdit->text().toStdString();
        listauz=zroblist();
        Oddanie w=oddajfilm(lista1,listauz,nazwa);
        ui->lineEdit->clear();

        if(w.czyjest==false)
        {
            ui->statusbar->showMessage(QString::fromUtf8("Nie ma takiego filmu lub nie posiadasz go w swojej bibliotece"));
        }else if (w.udalosie==true)
        {
            ui->statusbar->showMessage(QString::fromUtf8("Poprawnie oddano film do biblioteki"));
        }
        zapisfilmudouzyt(listauz);
        usunuzyt(listauz);

        }else if (zalogowanie==false)
        {
            ui->statusbar->showMessage(QString::fromUtf8("Musisz się zalogować"));
        }
        oddaj_bool=false;
        wypiszlisteodpoczatku();
    }
}


void MainWindow::on_pb_Ocen_clicked()
{
    if(zalogowanie==true)
    {
        ocokno=new ocena_okno(this);
    ocokno->show();
    }else if(zalogowanie==false)
    {
       ui->statusbar->showMessage(QString::fromUtf8("Musisz się zalogować"));
    }
    wypiszlisteodpoczatku();
}
void MainWindow::on_pbZarejestruj_clicked()
{

    rejestrokno=new rejestracja_okno(this);
    rejestrokno->show();

}
void MainWindow::on_pbZaloguj_clicked()
{
    if(zalogowanie==false)
    {
    logokno=new logowanie_okno(this);
    logokno->show();
    }
    if(zalogowanie==true)
    {
        QMessageBox::information(this,tr("BŁĄD"),tr("Jesteś już zalogowany"));

    }
}
void MainWindow::on_pbWyloguj_clicked()
{
    ui->statusbar->showMessage(QString::fromUtf8("Pomyślnie wylogowano"));
    log.clear();
    zalogowanie=false;
}



void MainWindow::on_pb_Oddaj_clicked()
{
    if(zalogowanie==true)
    {
    oddaj_bool=true;

    string nazwa=ui->lineEdit->text().toStdString();
    listauz=zroblist();
    Oddanie w=oddajfilm(lista1,listauz,nazwa);
    ui->lineEdit->clear();

    if(w.czyjest==false)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Nie ma takiego filmu lub nie posiadasz go w swojej bibliotece"));
    }else if (w.udalosie==true)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Poprawnie oddano film do biblioteki"));
    }
    zapisfilmudouzyt(listauz);
    usunuzyt(listauz);

    }else if (zalogowanie==false)
    {
        ui->statusbar->showMessage(QString::fromUtf8("Musisz się zalogować"));
    }
    wypiszlisteodpoczatku();
}
