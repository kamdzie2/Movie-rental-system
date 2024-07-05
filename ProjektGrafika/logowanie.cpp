#include "listy.h"

bool logowanie(QString loginR, QString hasloR)
{

        string login=loginR.toStdString();
        string haslo=hasloR.toStdString();

        ifstream plik("konta.txt");
        if(!plik.is_open())
            return false;

        while(!plik.eof())
        {
            string login1,haslo1;
            plik>>login1;
             plik>>haslo1;
            if(login==login1 &&haslo==haslo1)
            {
                log=login;
                plik.close();
                return true;
            }

        }
        plik.close();
        return false;
}
