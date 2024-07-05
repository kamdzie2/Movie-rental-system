#include "listy.h"

Wypozycz wypozyczenie(lista*glowa, listauzytkownika*glowka, string nazwafilmu)
{
    bool jest=false;
    Wypozycz w;
    w.czyjest=true;
    w.czymax=false;
    w.czyzajete=false;
    w.udalosie=false;
    w.czymoj=false;
    string zajete, kogo;
    ifstream plik(log+".txt");
    if(plik.is_open()==false)
    {
        lista *p=glowa;
        while(p)
         {
             if(p->film.nazwa.compare(nazwafilmu)==0)
             {
                 jest=true;
                 zajete=p->film.wypoz;
                 kogo=p->film.czyjfilm;
                 break;
             }

             p=p->nast;
         }
         if(jest==false)
         {
             w.czyjest=false;
             return w;
         }
         else if(jest==true)
         {
            if(zajete=="TAK")
            {
                if(p->film.czyjfilm==log)
                {
                 w.czymoj=true;
                 return w;
                }else
                {
                    w.czyzajete=true;
                    return w;
                }
            }
            else if(zajete=="NIE")
            {
                 p->film.czyjfilm=log;
                 p->film.wypoz="TAK";
                 ofstream pliczek(log+".txt",ios::app);
                 pliczek<<p->film.nazwa<<endl;

                 pliczek.close();
                 w.udalosie=true;
                 return w;
            }
         }


    }
    else if(plik.is_open()==true)
    {
        int n=0;
        listauzytkownika*q=glowka;
        n=policzfilmy(q);
        if(n>4)
        {
            w.czymax=true;
            return w;
        }else
        {
            lista*p=glowa;
            while(p)
            {
                if(p->film.nazwa.compare(nazwafilmu)==0)
                {
                    jest=true;
                    zajete=p->film.wypoz;
                    kogo=p->film.czyjfilm;
                    break;
                }
                p=p->nast;
            }
            if(jest==false)
            {
                w.czyjest=false;
                return w;
            }
            else if(jest==true)
            {
                if(zajete=="TAK")
                {
                    if(p->film.czyjfilm==log)
                    {
                     w.czymoj=true;
                     return w;
                    }else
                    {
                        w.czyzajete=true;
                        return w;
                    }
                }else if(zajete=="NIE")
                {
                    p->film.czyjfilm=log;
                    p->film.wypoz="TAK";
                    ofstream pliczek(log+".txt",ios::app);
                    pliczek<<p->film.nazwa<<endl;

                    pliczek.close();
                    w.udalosie=true;
                    return w;
                }
            }
        }
    }
    plik.close();

}
