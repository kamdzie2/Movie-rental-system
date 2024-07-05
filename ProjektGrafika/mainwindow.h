#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "listy.h"
#include <sstream>
#include "rejestracja_okno.h"
#include "logowanie_okno.h"
#include "ocena_okno.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pbZaloguj_clicked();
    void on_pbWyswietl_clicked();
    void on_pbDodaj_clicked();

    void on_lineEdit_returnPressed();

    void on_rbLwys_clicked();

    void on_rbAlfabet_clicked();

    void on_rbOcena_clicked();

    void on_pb_Wyszukaj_clicked();

    void on_pb_Ocen_clicked();

    void on_pbZarejestruj_clicked();

    void on_pbWyloguj_clicked();

    void on_pbWypozycz_clicked();

    void on_pb_Oddaj_clicked();



private:
    Ui::MainWindow *ui;
    lista* lista1;
    listauzytkownika* listauz;
    rejestracja_okno* rejestrokno;
    logowanie_okno* logokno;
    ocena_okno* ocokno;
    void wypiszliste();
    void konsola_dodaj();
    void wypiszlisteodpoczatku();



};
#endif // MAINWINDOW_H
