#include "listy.h"

listauzytkownika* zroblist()
{
    string login=log+".txt";
    fstream plik(login);
    listauzytkownika*glowa=NULL, *ogon=NULL;
    string dane2;

    while(1)
    {
        string nazwafilmu;
        fflush(stdin);
        getline(plik,nazwafilmu);
        if(nazwafilmu.empty()) break;
        dane2=nazwafilmu;

        listauzytkownika *nowy = new listauzytkownika;
        nowy->wypozyczenie=dane2;
        nowy->next = NULL;
        if(glowa==NULL)
        {
            glowa = nowy;
        }
        else
        {
            ogon->next = nowy;
        }
        ogon=nowy;
    }
    plik.close();
    return glowa;
}

lista* zrobliste(string nazwapliku)
{
    ifstream plik(nazwapliku);
    lista *glowa=NULL, *ogon=NULL;
    Dane dane;

    while(1)
    {
        string nazwafilmu;
        if(plik>>dane.pia)
        {

        plik>>dane.czw;
        plik>>dane.tro;
        plik>>dane.dwo;
        plik>>dane.jed;
        plik>>dane.lwys;
        dane.sr=(5*dane.pia+4*dane.czw+3*dane.tro+2*dane.dwo+dane.jed)/(dane.pia+dane.czw+dane.tro+dane.dwo+dane.jed);

        getline(plik, nazwafilmu);
        dane.nazwa=nazwafilmu;
        plik>>dane.wypoz;
        plik>>dane.kolejnosc;
        plik>>dane.czyjfilm;
        lista *nowy = new lista;
        nowy->film=dane;
        nowy->nast = NULL;
        if(glowa==NULL)
        {
            glowa = nowy;
            ogon = nowy;
        }
        else
        {
            ogon->nast = nowy;
            ogon = ogon->nast;
        }
        }
        else
            break;

    }
    plik.close();
    return glowa;

}
