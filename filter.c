#include "filter.h"

int filtrarGeneroComedy(void* a)
{
    int retorno=0;
    eMovie* movie = (eMovie*)a;
    if(a != NULL)
    {
        if(strcmp(movie->genero, "Comedy")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filtrarGeneroDrama(void* a)
{
    int retorno=0;
    eMovie* movie = (eMovie*)a;
    if(a != NULL)
    {
        if(strcmp(movie->genero, "Drama")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filtrarGeneroAction(void* a)
{
    int retorno=0;
    eMovie* movie = (eMovie*)a;
    if(a != NULL)
    {
        if(strcmp(movie->genero, "Action")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}


int filtrarGeneroRomance(void* a)
{
    int retorno=0;
    eMovie* movie = (eMovie*)a;
    if(a != NULL)
    {
        if(strcmp(movie->genero, "Romance")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}


int filtrarGeneroAdventure(void* a)
{
    int retorno=0;
    eMovie* movie = (eMovie*)a;
    if(a != NULL)
    {
        if(strcmp(movie->genero, "Adventure")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filtrarGeneroMusical(void* a)
{
    int retorno=0;
    eMovie* movie = (eMovie*)a;
    if(a != NULL)
    {
        if(strcmp(movie->genero, "Musical")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}
