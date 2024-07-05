#include "listy.h"

void wypisz(lista* w)
{
    while(w!=NULL)
    {
        cout<< w->film.nazwa<<endl;
        cout<<fixed<<setprecision(1)<<"ocena: "<<w->film.sr;
        cout<<fixed<<setprecision(0)<<' '<<"liczba wyszukiwan: "<<w->film.lwys<<endl;
        cout<<"wypozyczony: "<<w->film.wypoz<<endl;
        cout<<endl;
        w=w->nast;
    }
}

void usun(lista *&w)
{
    while(w)
    {
        lista *p=w;
        w=w->nast;
        delete p;
    }
}

void wypiszuzyt(listauzytkownika*k )
{
    fflush(stdout);
    while(k!=NULL)
    {
        cout<< k->wypozyczenie<<endl;
        k=k->next;
    }
}

void usunuzyt(listauzytkownika*k)
{
    while(k)
    {
        listauzytkownika *p=k;
        k=k->next;
        delete p;
    }
}
