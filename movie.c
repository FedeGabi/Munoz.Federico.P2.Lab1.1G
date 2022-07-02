#include "movie.h"

eMovie* movie_newMovie()
{
    return (eMovie*)malloc(sizeof(eMovie)*1);
}

eMovie* movie_parametros(char* id, char* titulo, char* genero, char* duracion)
{
    eMovie* nuevomovie= movie_newMovie();

    int intmovie = atoi(id);
    float floatDuracion = atof(duracion);

    if(id!=NULL && titulo!=NULL && genero!=NULL &&
            duracion!=NULL)
    {
        if(nuevomovie!=NULL)
        {
            if(!(movie_setIdmovie(nuevomovie,intmovie) &&
                    movie_setTitulo(nuevomovie, titulo) &&
                    movie_setGenero(nuevomovie, genero) &&
                    movie_setDuracion(nuevomovie, floatDuracion)))
            {
                nuevomovie=NULL;
            }
        }
    }
    return nuevomovie;
}


int movie_setIdmovie(eMovie* movie, int idmovie )
{
    int retorno=0;
    if(movie!= NULL && idmovie>0)
    {
        movie->id=idmovie;
        retorno=1;
    }
    return retorno;
}


int movie_getIdmovie(eMovie* movie, int* idmovie )
{
    int retorno=0;
    if(movie!= NULL && idmovie>0)
    {
        *idmovie=movie->id;
        retorno=1;
    }
    return retorno;
}


int movie_setTitulo(eMovie* movie, char* titulo)
{
    int retorno=0;
    if(movie!= NULL && titulo !=NULL)
    {
        strlwr(titulo);
        titulo[0]= toupper(titulo[0]);
        strcpy(movie->titulo, titulo);
        retorno=1;
    }
    return retorno;
}


int movie_getTitulo(eMovie* movie, char* titulo)
{
    int retorno=0;
    if(movie!= NULL && titulo !=NULL)
    {
        strcpy(titulo, movie->titulo);
        retorno=1;
    }
    return retorno;
}



int movie_setGenero(eMovie* movie, char* genero)
{
    int retorno=0;
    if(movie!= NULL && genero !=NULL)
    {
        strlwr(genero);
        genero[0]= toupper(genero[0]);
        strcpy(movie->genero, genero);
        retorno=1;
    }
    return retorno;
}


int movie_getGenero(eMovie* movie, char* genero)
{
    int retorno=0;
    if(movie!= NULL && genero !=NULL)
    {
        strcpy(genero, movie->genero);
        retorno=1;
    }
    return retorno;
}


int movie_setDuracion(eMovie* movie, float duracion )
{
    int retorno=0;
    if(movie!=NULL && duracion>=0 && duracion<=23)
    {
        movie->duracion=duracion;
        retorno=1;
    }
    return retorno;
}

int movie_getDuracion(eMovie* movie, float* duracion )
{
    int retorno=0;
    if(movie!=NULL && duracion!=NULL)
    {
        *duracion=movie->duracion;
        retorno=1;

    }
    return retorno;
}


//////         --------------          --------------------       /////////


void mostrarMovie(eMovie* movie, LinkedList* listaMovies)
{
    if(movie!=NULL && listaMovies != NULL)
    {
        printf("%d, %s, %s, %.2f hs\n", movie->id,
                                         movie->titulo,
                                         movie->genero,
                                         movie->duracion
                                                         );
    }

}
