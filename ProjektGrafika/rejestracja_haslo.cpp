#include "listy.h"
#include <QString>

Haslo_rejestr sprawdzeniehaslo(QString hasloR)
{

    Haslo_rejestr q;
    string haslo=hasloR.toStdString();

    q.dlugosch=true;
    q.pusteh=true;
    q.cyfryh=true;
    q.duzeh=true;

    for(int i=0;i<haslo.size();i++)
    {
        char znak=haslo[i];
        if(znak==' ')
        {
             q.pusteh=false;
            return q;
        }

        if(znak>='A'&& znak<='Z')
        {
             q.duzeh=false;
             return q;
        }

        if(znak>='0'&& znak<='9')
        {
             q.cyfryh=false;
             return q;
        }
    }

    if(haslo.size()>15)
    {
       // "Haslo moze miec maksymalnie 15 znakow"
         q.dlugosch=false;
         return q;
    }

    return q;

}
