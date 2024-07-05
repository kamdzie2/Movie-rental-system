#include "listy.h"

dodanofilm dodaj(lista*&glowa, string nowanazwa)
{
    lista *p, *e,*f;
    f=glowa;
    int x=policz(f)+1;
    e=new lista;
    e->nast=NULL;
    dodanofilm q;
    q.pustepole=false;
    q.rownanazwa=false;

    e->film.pia=0;
    e->film.czw=0;
    e->film.tro=0;
    e->film.dwo=0;
    e->film.jed=0;
    e->film.lwys=0;
    e->film.sr=(5*e->film.pia+4*e->film.czw+3*e->film.tro+2*e->film.dwo+e->film.jed)/(e->film.pia+e->film.czw+e->film.tro+e->film.dwo+e->film.jed);
    e->film.nazwa=nowanazwa;
    e->film.wypoz="NIE";
    e->film.czyjfilm="NIKT";
    p=glowa;
    if(e->film.nazwa.empty())
    {
        q.pustepole=true;
    }
    while(p->nast)
    {
        if(!(p->film.nazwa.compare(e->film.nazwa)))
        {
            q.rownanazwa=true;
            break;
        }
        p=p->nast;
    }

    if(!(p->film.nazwa.compare(e->film.nazwa)))
    {
        q.rownanazwa=true;
    }

    if(q.rownanazwa==false && q.pustepole==false)
    {
        p->nast=e;
        ofstream plik("dane.txt", ios::app);
        plik<<e->film.pia<<' '<<e->film.czw<<' '<<e->film.tro<<' ' <<e->film.dwo<<' '<<e->film.jed<<' '<<e->film.lwys<<e->film.nazwa<<endl;
        e->film.kolejnosc=x;
        plik<<e->film.wypoz<<' '<<e->film.kolejnosc<<e->film.czyjfilm<<endl;
        plik.close();
    }

    return q;

}
