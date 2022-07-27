#include "mapeo.h"

void* asignarDuracion(void* a)
{
    eMovie* movie=NULL;
    movie =(eMovie*)a;
    int numero=movie->idPeli;
    srand(numero*time(NULL));
    float duracionAux = rand() % (5-1+1) + 1;
    if(movie!=NULL)
    {
        movie_setDuracion(movie, duracionAux);
    }
return movie;
}
