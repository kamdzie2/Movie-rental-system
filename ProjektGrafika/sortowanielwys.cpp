#include "listy.h"

void sortowanielwys(lista *&glowa)
{
    lista* p = NULL;
   for(int i=0; i<policz(glowa); i++)
   {
       p=glowa;
       while(p->nast!=NULL)
       {
           if(p->film.lwys<p->nast->film.lwys)
           {
               Dane tmp=p->nast->film;
               p->nast->film=p->film;
               p->film=tmp;
           }
           p=p->nast;
       }
   }
}
