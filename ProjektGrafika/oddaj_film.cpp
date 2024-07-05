#include "listy.h"

Oddanie oddajfilm (lista *glowa, listauzytkownika*&glowka, string filmnazwa)
{
    lista*p=glowa;
    bool jest=false;
    Oddanie o;
    o.czyjest=true;
    //o.czymasz=false;
    o.udalosie=false;
    //while(true)
   // {
        listauzytkownika*q=glowka;
        listauzytkownika*glowakopia=glowka;
        if(q==NULL)
        {
            //cout<<"Do twojego konta nie jest przypisany zaden film"<<endl;
            o.czyjest=false;
            return o;
        }else
        {
            /*fflush(stdin);
            cout<<"Podaj nazwe filmu do zwrotu: "<<endl;
            wypiszuzyt(q);
            getline(cin,filmnazwa);*/
            if(q->wypozyczenie==filmnazwa)
            {
                     listauzytkownika*Dousuniecia=glowka;
                     glowka=glowka->next;
                     delete Dousuniecia;
                     jest=true;
                     while (p)
                     {
                         if(p->film.nazwa==filmnazwa)
                         {
                             p->film.czyjfilm="NIKT";
                             p->film.wypoz="NIE";
                             break;
                         }
                         p=p->nast;
                     }
                     o.udalosie=true;
                     return o;
            }
            else
            {
                while(q)
                {
                    if(q->wypozyczenie==filmnazwa)
                    {
                        jest=true;
                        listauzytkownika*Dousuniecia=q;
                        listauzytkownika*nastepnikusuwanego=q->next;
                        glowakopia->next=nastepnikusuwanego;
                        delete Dousuniecia;


                        while (p)
                        {
                            if(p->film.nazwa==filmnazwa)
                            {
                                p->film.czyjfilm="NIKT";
                                p->film.wypoz="NIE";
                                break;
                            }
                            p=p->nast;
                        }


                        /*cout<<"Film zostal pomyslnie oddany do biblioteki"<<endl;
                        break;*/

                    }

                    glowakopia=q;
                    q=q->next;
                }
            }
            if(jest==true)
            {
                o.udalosie=true;
                return o;
            }
            else if(jest==false)
            {
                //cout<<"Nie ma takiego filmu lub nie posiadasz go na koncie"<<endl;
              o.czyjest=false;
              return o;
            }

        }
    //}

}
