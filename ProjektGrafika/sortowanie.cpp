#include "listy.h"
void sortowanie(lista *&glowa)
{
    lista* p = NULL;
   for(int i=0; i<policz(glowa); i++)
   {
       p=glowa;
       while(p->nast!=NULL)
       {
           if(p->film.nazwa.compare(p->nast->film.nazwa)>0)
           {
               Dane tmp=p->nast->film;
               p->nast->film=p->film;
               p->film=tmp;
           }
           p=p->nast;
       }
   }
}
