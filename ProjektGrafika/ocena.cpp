#include "listy.h"

bool ocena1(lista *&glowa, QString nazwaO, int ocena)
{ 
            lista*p=glowa;
            string nazwa=nazwaO.toStdString();
            bool jest=false;
            while(p)
            {
                if(p->film.nazwa.compare(nazwa)==0)
                {
                    jest=true;
                        if(ocena==5)
                        {
                            p->film.pia++;
                            break;
                        }
                        else if(ocena==4)
                        {
                            p->film.czw++;
                            break;
                        }
                        else if(ocena==3)
                        {
                            p->film.tro++;
                            break;
                        }
                        else if(ocena==2)
                        {
                            p->film.dwo++;
                            break;
                        }
                        else if(ocena==1)
                        {
                            p->film.jed++;
                            break;
                        }
                }
                p=p->nast;
            }
            return jest;
}
