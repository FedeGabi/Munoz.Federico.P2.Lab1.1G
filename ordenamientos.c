#include "ordenamientos.h"

int ordenarPeliculasPorGeneroYduracion(void* a, void* b)
{
    int retorno=-1;
    eMovie* movie1= (eMovie*)a;
    eMovie* movie2= (eMovie*)b;
    if(movie1!=NULL && movie2!=NULL)
    {
        if(strcmp(movie1->genero, movie2->genero)>0)
        {
            retorno=1;
        }
        else if(strcmp(movie1->genero, movie2->genero)==0 &&
                (movie1->duracion>movie2->duracion))
        {
            retorno=0;
        }
    }
    return retorno;
}

int ordenarPeliculasPorDuracion(void* a, void* b)
{
    int retorno=0;
    eMovie* movie1= (eMovie*)a;
    eMovie* movie2= (eMovie*)b;
    if(movie1!=NULL && movie2!=NULL)
    {
        if(movie1->duracion>movie2->duracion)
        {
            retorno=1;
        }
    }
    return retorno;
}
