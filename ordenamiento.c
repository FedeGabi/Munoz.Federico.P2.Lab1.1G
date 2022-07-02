#include "ordenamiento.h"
#include <time.h>


int movie_sortGeneroDuracion(void* a, void* b)
{
    int retorno=-2;
    if(a != NULL && b != NULL)
    {
        eMovie* movie1 = (eMovie*) a;
        eMovie* movie2 = (eMovie*) b;
        if(strcmp(movie1->genero,movie2->genero)==1)
        {
            retorno=1;
        }
        else if(strcmp(movie1->genero,movie2->genero)==-1)
        {
            retorno=-1;
        }
        else if (strcmp(movie1->genero,movie2->genero)==0)
        {
            retorno= 0;
        }
    }
    return retorno;
}


void* generarAleatorio(void* a)
{
    srand(time(NULL));
    eMovie* movie;
    float numero = rand() % (5-1+1) + 1;
    if(movie!=NULL){
    eMovie* movie = (eMovie*)a;
        if(movie!=NULL)
        {
            movie->duracion=numero;
        }
    }
    return movie;
}
