#ifndef LISTY_H
#define LISTY_H
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <QString>
#include <QHeaderView>
#include <QProcess>
#include <QMessageBox>

/**
* \mainpage
* \par Biblioteka filmów
* Program wykonujący operację na bazie danych filmów
* \author Kamil Dziewa
* \date 2021.06.09
* \version 1.0
* \par Kontakt:
* \a 01162215@pw.edu.pl
*/

/**
* \file funkcje.h
* \brief Plik nagłówkowy z definicjami funkcji i struktur.
*/

/**
* \file mainwindow.h
* \brief Plik nagłówkowy z definicjami funkcji i struktur- główne okno operacyjne.
*/

/**
* \file logowanie_okno.h
* \brief Plik nagłówkowy - okno logowania.
*/

/**
* \file rejestracja_okno.h
* \brief Plik nagłówkowy - okno rejestracji.
*/

/**
* \file ocena_okno.h
* \brief Plik nagłówkowy - okno wystawienia oceny filmu.
*/

/**
* \file dodaj_film.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących dodawania przez użytkownika filmu do biblioteki.
*/


/**
* \file licz.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących zliczania filmów w bazie danych.
*/

/**
* \file listy.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących tworzenia list jednokierunkowych.
*/


/**
* \file logowanie.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących logowania.
*/


/**
* \file logowanie_okno.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących okna logowania.
*/

/**
* \file mainwindow.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących głównego okna programu.
*/


/**
* \file ocena.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących wystawienia oceny filmu.
*/

/**
* \file ocena_okno.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących okna oceniania filmu.
*/

/**
* \file oddaj_film.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących oddania przez użytkownika wypożyczonego filmu.
*/

/**
* \file op_na_listach.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących operacji na listach np. usuń listę, wypisz listę.
*/

/**
* \file operacje_koncowe.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących operacji końcowych np. zapis bazy danych do pliku.
*/

/**
* \file rejestracja.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących rejestracji nowego konta.
*/

/**
* \file rejestracja_okno.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących okna rejestracji.
*/

/**
* \file sortowanie.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących sortowania listy- alfabetycznie.
*/

/**
* \file sortowanielwys.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących sortowania listy- liczba wyświetleń.
*/

/**
* \file sortowanieocena.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących sortowania listy- ocena.
*/

/**
* \file szukaj_filmu.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących wyszukania filmu z listy.
*/

/**
* \file wypozycz_film.cpp
* \brief Plik źródłowy z rozwinieciami funkcji dotyczących wypożyczenia przez użytkownika filmu z biblioteki.
*/

/**
 * \file main.cpp
 * \brief Wykonawczy plik źródłowy programu.
 */

using namespace std;
/// Zmienna globalna log, która przechowuje login zalogowanego użytkownika
extern string log;
/// Zmienna globalna zalogowanie, która przechowuje czy użytkownik zalogował się do bazy danych
extern bool zalogowanie;


/**
 * \brief Sprawdzenie poprawnej nazwy nowego filmu
 *
 *  Struktura zapisuje czy nazwa podana przez użytkownika nie powtórzyła się oraz czy nie została podana pusta nazwa.
 */
struct dodanofilm
{
    /// Powtórzona nazwa
    bool rownanazwa;
    /// Pusta nazwa
    bool pustepole;
};

/**
 * \brief Sprawdzenie parametrów rejestracji-login
 *
 *  Struktura zapisuje czy w trakcie rejestrakcji, użytkownik nie wprowadził zajętego loginu, czy nie wprowadził pustej nazwy, czy login nie przekracza ustalonej długości.
 */

struct Login_rejestr
{
    /// Pusty login
    bool pustel;
    /// Login nie dłuższy niż ustalona długość
    bool dlugoscl;
    /// Login zajęty
    bool zajetel;
};

/**
 * \brief Sprawdzenie parametrów rejestracji-haslo
 *
 *  Struktura zapisuje czy w trakcie rejestrakcji, użytkownik zawarł w haśle dużą literę oraz cyfry, czy hasło nie przekracza ustalonej długości oraz czy nie wprowadził pustej nazwy.
 */

struct Haslo_rejestr
{
    /// Puste hasło
    bool pusteh;
    /// Hasło nie jest dłuższe niż ustalona długość
    bool dlugosch;
    /// Cyfry w haśle
    bool cyfryh;
    /// Duże litery w haśle
    bool duzeh;
};

/**
 * \brief Sprawdzenie parametrów rejestracji
 */
struct Rejestracja
{
    Login_rejestr login;
    Haslo_rejestr haslo;
};

/**
 * \brief Sprawdzenie parametrów wypożyczenia
 *
 *  Struktura zapisuje czy przy próbie wypożyczenia filmu z biblioteki, dany film nie był zajęty, czy użytkownik nie przekroczył limitu posiadanych filmów na koncie, czy dany film jest w bibliotece, czy udało sie wypożyczyć, czy użytkownik wcześniej nie wypożyczył tego filmu.
 */

struct Wypozycz
{
    /// Film zajęty przez inne konto
    bool czyzajete;
    /// Więcej niż 5 filmów na koncie
    bool czymax;
    /// Czy dany film istnieje
    bool czyjest;
    /// Czy udało się
    bool udalosie;
    /// Czy użytkownik posiada ten film
    bool czymoj;

};

/**
 * \brief Sprawdzenie parametrów przy oddawaniu filmu
 *
 *  Struktura zapisuje czy przy próbie oddania filmu, użytkownik nie podał nieprawidłowej nazwy filmu oraz czy operacja zwrotu filmu do biblioteki powiodła się.
 */

struct Oddanie
{
    /// Czy jest taki film
    bool czyjest;
    /// Czy udało się
    bool udalosie;
};
/**
 * \brief Filmy użytkownika
 *
 *  Struktura zawierająca filmy wypozyczone przez użytkownika.
 */

struct listauzytkownika
{
    /// Nazwa filmu
    string wypozyczenie;
    /// Wskaźnik na następny element listy
    listauzytkownika *next;
};

/**
 * \brief Stworzenie listy z filmami użytkownika
 *  Funkcja tworzy liste z filmami, które użytkownik wcześniej wypożyczył.
 *
 * \return lista filmów użytkownika
 */
listauzytkownika* zroblist();

/**
 * \brief Baza filmów
 *
 *  Struktura zawieraja nazwy filmów wraz z poszczególnymi parametrami.
 */
struct Dane
{
    /// Czy film jest wypożyczony
    string wypoz;
    /// Ilość ocen: 5
    float pia;
    /// Ilość ocen: 4
    float czw;
    /// Ilość ocen: 3
    float tro;
    /// Ilość ocen: 2
    float dwo;
    /// Ilość ocen: 1
    float jed;
    /// Ile razy film został wyszukany
    float lwys;
    /// Ocena filmu
    float sr;
    /// Nazwa filmu
    string nazwa;
    /// Który w kolejności na liście jest dany film
    int kolejnosc;
    /// Przez kogo film został wypożyczony
    string czyjfilm;
};

/**
 * \brief Baza filmów
 *
 *  Struktura zawierająca filmy wraz z parametrami.
 */
struct lista
{
    /// Parametry filmóW
    Dane film = {"",0,0,0,0,0,0,0,"",0,""};
     /// Wskaźnik na następny element listy
    lista *nast;
};

/**
 * \brief Stworzenie listy z filmami
 *  Funkcja tworzy liste z filmami zawartymi w bazie danych.
 *  \param nazwapliku
 * \return lista filmów
 */
lista* zrobliste(string nazwapliku);

/**
 * \brief Liczenie elementów
 *  Funkcja liczy ile elementów znajduje się w liście.
 *  \param glowa
 * \return liczba elementów w liście z filmami
 */
int policz(lista* glowa);

/**
 * \brief Liczenie elementów
 *  Funkcja liczy ile elementów znajduje się w liście użytkownika.
 *  \param glowa
 * \return liczba elementów w liście z filmami użytkownika
 */
int policzfilmy(listauzytkownika* glowa);


/**
 * \brief Logowanie
 *  Funkcja pobiera od użytkownika login oraz haslo, jeśli wszystko zostało wykonane poprawnie login zostaje zapisany przez zmienną globalną log.
 *  \param login
 *  \param haslo
 * \return czy zalogowano
 */
bool logowanie(QString login, QString haslo);

/**
 * \brief Rejestracja
 *  Funkcja pobiera od użytkownika login oraz haslo potrzebne do rejestracji, sprawdza czy login nie jest zajęty oraz czy spełnione zostały wymogi.
 * \param login
 * \param haslo
 */
void rejestracja(QString login, QString haslo);

/**
 * \brief Login rejestracja
 *  Funkcja sprawdza czy wszystkie wymogi podczas rejestracji zostały spełnione- login.
 * \param login
 * \return spelnione wymogi
 */
Login_rejestr sprawdzenie_login(QString loginR);


/**
 * \brief Haslo rejestracja
 *  Funkcja sprawdza czy wszystkie wymogi podczas rejestracji zostały spełnione- haslo.
 * \param haslo
 * \return spelnione wymogi
 */
Haslo_rejestr sprawdzenie_haslo(QString hasloR);



/**
 * \brief Usuń listę użytkownika
 *  Funkcja usuwa listę filmów wypożyczonych przez danego użytkownika.
 * \param k
 */
void usunuzyt(listauzytkownika*k);

/**
 * \brief Wypisz listę użytkownika
 *  Funkcja wypisuje listę filmów wypożyczonych przez danego użytkownika.
 * \param k
 */
void wypiszuzyt(listauzytkownika*k );

/**
 * \brief Usuń listę
 *  Funkcja usuwa listę filmów.
 * \param w
 */
void usun(lista *&w);

/**
 * \brief Wypisz listę
 *  Funkcja wypisuje listę filmów.
 * \param w
 */
void wypisz(lista* w);

/**
 * \brief Oddanie filmu
 *  Funkcja zwraca wypożyczony przez użytkownika film do głównej bazy danych.
 * \param glowa
 * \param glowka
 * \param filmnazwa
 */
Oddanie oddajfilm (lista *glowa, listauzytkownika*&glowka, string filmnazwa);

/**
 * \brief Wypożyczenie filmu
 *  Funkcja przydziela użytkownikowi film podany przez niego w konsoli jeśli spełnione zostały odpowiednie wymogi.
 * \param glowa
 * \param glowka
 * \param nazwa
 */
Wypozycz wypozyczenie(lista*glowa, listauzytkownika*glowka, string nazwa);



/**
 * \brief Zapisanie filmów użytkownika do pliku
 *  Funkcja zapisuje filmy wypożyczone przez użytkownika do pliku.
 * \param glowka
 */
void zapisfilmudouzyt(listauzytkownika*glowka);

/**
 * \brief Zapisanie filmów do pliku
 *  Funkcja zapisuje główną bazę danych do pliku.
 * \param glowa
 */
void zapisdopliku(lista*glowa);

/**
 * \brief Sortowanie filmów
 *  Funkcja sortuje filmy do pozycji startowej po czym zapisuje je do pliku.
 * \param glowa
 */
void sortowaniekoncowe(lista*&glowa);


/**
 * \brief Sortowanie alfabetyczne
 *  Funkcja sortuje filmy alfabetycznie.
 * \param glowa
 */
void sortowanie(lista *&glowa);

/**
 * \brief Sortowanie po liczbie wyświetleń
 *  Funkcja sortuje filmy według liczby wyświetleń.
 * \param glowa
 */
void sortowanielwys(lista *&glowa);

/**
 * \brief Sortowanie po ocenie
 *  Funkcja sortuje filmy według oceny filmu.
 * \param glowa
 */
void sortowanieocena(lista*&glowa);


/**
 * \brief Wyszukiwanie filmu
 *  Funkcja wyszukuje filmu w bibliotece, jeśli spełnione użytkownik podał odpowiednią nazwę, film zostaje wyświetlony.
 * \param glowa
 * \param nazwa
 * \return szukany film
 */
Dane szukaj(lista*glowa, string nazwa);

/**
 * \brief Dodanie filmu
 *  Funkcja dodaje film, który użytkownik podał do głównej bazy danych.
 * \param glowa
 * \param nowanazwa
 * \return czy dodano
 */
dodanofilm dodaj(lista*&glowa, string nowanazwa);

/**
 * \brief Wystawienie oceny filmu
 *  Funkcja wystawia ocene wskazaną przez użytkownika, jeśli nazwa filmu została podana prawidłowo
 * \param glowa
 * \param nazwa
 * \param ocena
 * \return czy oceniono
 */
bool ocena1(lista *&glowa, QString nazwa, int ocena);

#endif // LISTY_H
