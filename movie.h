#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct{
    int idPeli;
    char titulo[50];
    char genero[50];
    float duracion;
}eMovie;

eMovie* new_movie();

eMovie* new_parametros(char* id, char* titulo, char* genero, char* duracion);

int movie_setId(eMovie* movie, int id);

int movie_getId(eMovie* movie, int* id);

int movie_setTitulo(eMovie* movie, char* titulo);

int movie_getTitulo(eMovie* movie, char* titulo);

int movie_setGenero(eMovie* movie, char* genero);

int movie_getGenero(eMovie* movie, char* genero);

int movie_setDuracion(eMovie* movie, float duracion);

int movie_getDuracion(eMovie* movie, float* duracion);

void mostrarMovie(eMovie* movie);

#endif // MOVIE_H_INCLUDED
