#include "listy.h"
Dane szukaj(lista*glowa, string nazwa)
{
    lista*p=glowa;
    bool jest=false;
    Dane q;
    while(p)
    {
        if(p->film.nazwa.compare(nazwa)==0)
        {
            p->film.lwys++;
            q=p->film;
            jest=true;
            break;
        }
        p=p->nast;
    }
    /*if(jest==true)
    {
    return q;
    }
    else if(jest==false)
    {
        return q;
    }*/
    return q;

}
