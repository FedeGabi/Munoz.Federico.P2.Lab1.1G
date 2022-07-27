#include "movie.h"


eMovie* new_movie()
{
    eMovie* movie =(eMovie*)malloc(sizeof(eMovie));
    return movie;
}

eMovie* new_parametros(char* id, char* titulo, char* genero, char* duracion)
{
    eMovie* movie= new_movie();
    float auxFloat;
    int auxInt;
    if(movie!=NULL && id!=NULL && titulo!=NULL && genero!=NULL && duracion!=NULL)
    {
        auxFloat=atof(duracion);
        auxInt=atoi(id);

        if(movie_setId(movie, auxInt) &&
           movie_setTitulo(movie, titulo) &&
           movie_setGenero(movie, genero) &&
           movie_setDuracion(movie, auxFloat))
        {

        }
        else{
            printf("\nNo se pudieron cargar los datos de la pelicula\n");
            system("pause");

            free(movie);
            movie=NULL;
        }
    }
    return movie;
}

int movie_setId(eMovie* movie, int id)
{
    int retorno=0;
    if(movie!=NULL && id>0)
    {
        movie->idPeli=id;
        retorno=1;
    }
    return retorno;
}

int movie_getId(eMovie* movie, int* id)
{
    int retorno=0;
    if(movie!=NULL && id>0)
    {
        *id=movie->idPeli;
        retorno=1;
    }
    return retorno;
}

int movie_setTitulo(eMovie* movie, char* titulo)
{
    int retorno=0;
    if(movie!=NULL && titulo!=NULL && strlen(titulo)<50)
    {
        strcpy(movie->titulo, titulo);
        retorno=1;
    }
    return retorno;
}

int movie_getTitulo(eMovie* movie, char* titulo)
{
    int retorno=0;
    if(movie!=NULL && titulo!=NULL)
    {
        strcpy(titulo, movie->titulo);
        retorno=1;
    }
    return retorno;
}

int movie_setGenero(eMovie* movie, char* genero)
{
    int retorno=0;
    if(movie!=NULL && genero!=NULL && strlen(genero)<50)
    {
        strcpy(movie->genero, genero);
        retorno=1;
    }
    return retorno;
}

int movie_getGenero(eMovie* movie, char* genero)
{
    int retorno=0;
    if(movie!=NULL && genero!=NULL)
    {
        strcpy(genero, movie->genero);
        retorno=1;
    }
    return retorno;
}

int movie_setDuracion(eMovie* movie, float duracion)
{
    int retorno=0;
    if(movie!=NULL && duracion>=0)
    {
        movie->duracion=duracion;
        retorno=1;
    }
    return retorno;
}

int movie_getDuracion(eMovie* movie, float* duracion)
{
    int retorno=0;
    if(movie!=NULL && duracion>0)
    {
        *duracion=movie->duracion;
        retorno=1;
    }
    return retorno;
}

void mostrarMovie(eMovie* movie)
{
    if(movie!=NULL)
    {
        printf("%d, %s, %s, %.2f\n", movie->idPeli, movie->titulo, movie->genero, movie->duracion);
    }
}
