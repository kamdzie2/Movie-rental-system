#include "listy.h"
int policz(lista* glowa)
{
    lista*p=glowa;
    int i=0;
    while( p )
    {
      i++;
      p = p->nast;
    }
    return i;
}

int policzfilmy(listauzytkownika* glowa)
{
    listauzytkownika*p=glowa;
    int i=0;
    while( p )
    {
      i++;
      p = p->next;
    }
    return i;
}
