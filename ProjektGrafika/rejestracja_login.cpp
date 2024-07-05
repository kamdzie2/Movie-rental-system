#include "listy.h"
#include <QString>

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
            //"Niepoprawny znak"
                q.pustel=false;
                break;
            }
        }

        if(login.size()>10)
        {
            //"Login może zawierac maksymalnie 10 znakow"
            q.dlugoscl=false;
        }

        ifstream plik("konta.txt");
        if(!plik.is_open())
        {
            q.zajetel=true;
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
            return q;

        }else
        {
            return q;
        }

            /*else if(n==0)
        {
           // cout<<"Pomyslnie zalozono konto"<<endl;
            ofstream plikdo("konta.txt", ios::app);
            plikdo<<endl<<login<<' '<<haslo;
            plik.close();
            break;
        }*/
}
