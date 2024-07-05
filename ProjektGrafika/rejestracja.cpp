#include "listy.h"
#include <QString>

void rejestracja(QString loginK, QString hasloK)
{
    string login=loginK.toStdString();
    string haslo=hasloK.toStdString();
    ofstream plikdo("konta.txt", ios::app);
    plikdo<<login<<' '<<haslo<<endl;
    plikdo.close();
}

Haslo_rejestr sprawdzenie_haslo(QString hasloR)
{

    Haslo_rejestr q;
    string haslo=hasloR.toStdString();

    q.dlugosch=true;
    q.pusteh=true;
    q.cyfryh=false;
    q.duzeh=false;

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
             q.duzeh=true;
             //return q;
        }

        if(znak>='0'&& znak<='9')
        {
             q.cyfryh=true;
             //return q;
        }

    }

    if(haslo.size()>15)
    {
         q.dlugosch=false;
         return q;
    }

    return q;

}
Login_rejestr sprawdzenie_login(QString loginR)
{
    int n=0;
    Login_rejestr q;
    string login=loginR.toStdString();

    q.dlugoscl=true;
    q.pustel=true;
    q.zajetel=false;

        for(int i=0;i<login.size();i++)
        {
            char znak;
            znak=login[i];
            if(znak==' ')
            {
                q.pustel=false;
                break;
            }
        }

        if(login.size()>10)
        {
            q.dlugoscl=false;
        }

        ifstream plik("konta.txt");
        if(!plik.is_open())
        {
           return q;
        }
        while(!plik.eof())
        {
            string login1, haslo1;
            plik>>login1;
            plik>>haslo1;
           if(login==login1)
               n=1;
        }
        if(n==1)
        {
            q.zajetel=true;
            plik.close();
            return q;
        }else
        {
            plik.close();
            return q;
        }

}
