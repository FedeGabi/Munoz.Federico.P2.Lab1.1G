#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "LinkedList.h"
typedef struct
{
    int id;
    char titulo[50];
    char genero[50];
    float duracion;
}eMovie;



eMovie* movie_newmovie();

eMovie* movie_parametros(char* id, char* titulo, char* genero, char* duracion);

int movie_setIdmovie(eMovie* movie, int id );

int movie_getIdmovie(eMovie* movie, int* id );


int movie_setDestino(eMovie* movie, char* titulo);

int movie_getDestino(eMovie* movie, char* titulo);


int movie_setDestino(eMovie* movie, char* genero);

int movie_getDestino(eMovie* movie, char* genero);



int movie_setDuracion(eMovie* movie, float duracion );

int movie_getDuracion(eMovie* movie, float* duracion);


void mostrarmovie(eMovie* movie);

#endif // MOVIE_H_INCLUDED
