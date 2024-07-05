#include "listy.h"
void interface(lista*&glowa)
{
    int n=0;

    bool zalogowano=false;
    do
    {
        lista*p=glowa;
        listauzytkownika*q;
        int odpowiedz;
        cout<<"WYBIERZ LICZBE"<<endl;
        cout<<"1.Wyswietl filmy"<<endl;
        cout<<"2.Posortuj"<<endl;
        cout<<"3.Ocen film"<<endl;
        cout<<"4.Wyszukaj film"<<endl;
        cout<<"5.Dodaj film"<<endl;
        cout<<"6.Wypozycz film"<<endl;
        cout<<"7.Oddaj film"<<endl;
        cout<<"8.Zaloguj sie"<<endl;
        cout<<"9.Zarejestruj sie"<<endl;
        cout<<"10.Wyloguj sie"<<endl;
        cout<<"11.Anuluj"<<endl;
        cin>>odpowiedz;

        while(odpowiedz<1 || odpowiedz>11)
        {
            cout<<"Niepoprawna odpowiedz"<<endl;
            int odpowiedz;
            cout<<"WYBIERZ LICZBE"<<endl;
            cout<<"1.Wyswietl filmy"<<endl;
            cout<<"2.Posortuj"<<endl;
            cout<<"3.Ocen film"<<endl;
            cout<<"4.Wyszukaj film"<<endl;
            cout<<"5.Dodaj film"<<endl;
            cout<<"6.Wypozycz film"<<endl;
            cout<<"7.Oddaj film"<<endl;
            cout<<"8.Zaloguj sie"<<endl;
            cout<<"9.Zarejestruj sie"<<endl;
            cout<<"10.Wyloguj sie"<<endl;
            cout<<"11.Anuluj"<<endl;
            cin>>odpowiedz;

        }

        if(odpowiedz==1)
        {
            wypisz(p);
        }
        else if(odpowiedz==2)
        {
            sortowanie (p);
        }
        else if(odpowiedz==3)
        {
            if(zalogowano==true)
            {
            ocena(p);
            }
            else if(zalogowano==false)
            {
                cout<<"Zaloguj sie"<<endl;
            }
        }
        else if(odpowiedz==4)
        {
            szukaj(p);
        }
        else if(odpowiedz==5)
        {
            if(zalogowano==true)
            {
            dodaj(p);
            }
            else if(zalogowano==false)
            {
                cout<<"Zaloguj sie"<<endl;
            }
        }
        else if(odpowiedz==6)
        {
            if(zalogowano==true)
            {
                wypozyczenie(p,q);
            }else if (zalogowano== false)
            {
                cout<<"Zaloguj sie"<<endl;
            }
        }
        else if(odpowiedz==7)
        {
            if(zalogowano==true)
            {
                oddajfilm(p,q);
                zapisfilmudouzyt(q);
            }else if (zalogowano== false)
            {
                cout<<"Zaloguj sie"<<endl;
            }
        }
        else if(odpowiedz==8)
        {
            zalogowano=logowanie();
            q=zroblist();

        }
        else if(odpowiedz==9)
        {
            rejestracja();
        }
        else if(odpowiedz==10)
        {
            log="";
            has="";
            zalogowano=false;
        }
        else if(odpowiedz==11)
        {
            n=1;
        }
    }while(n!=1);
}
