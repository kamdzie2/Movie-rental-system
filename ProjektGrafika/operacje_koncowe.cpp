#include "listy.h"
void zapisfilmudouzyt(listauzytkownika*glowka)
{
    listauzytkownika*q=glowka;
    ofstream plik(log+".txt");
    while(q)
    {
        plik<<q->wypozyczenie<<endl;
        q=q->next;
    }
}


void zapisdopliku(lista*glowa)
{
    lista*e=glowa;
    ofstream plik("dane.txt");
    while(e)
    {
        plik<<e->film.pia<<' '<<e->film.czw<<' '<<e->film.tro<<' ' <<e->film.dwo<<' '<<e->film.jed<<' '<<e->film.lwys<<e->film.nazwa<<endl;
        plik<<e->film.wypoz<<' '<<e->film.kolejnosc<<e->film.czyjfilm<<endl;
        e=e->nast;

    }
    plik.close();

}

void sortowaniekoncowe(lista*&glowa)
{
    lista* p = NULL;

   for(int i=0; i<policz(glowa); i++)
   {
       p=glowa;
       while(p->nast!=NULL)
       {
           if(p->film.kolejnosc>p->nast->film.kolejnosc)
           {
               Dane tmp=p->nast->film;
               p->nast->film=p->film;
               p->film=tmp;

           }
           p=p->nast;
       }
   }
}
