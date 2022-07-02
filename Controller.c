#include "Controller.h"
#include <stdio.h>

int controller_loadMoviesFromText(char *path, LinkedList* listaMovies)
{
    int retorno = 0;
    if (path != NULL && listaMovies != NULL)
    {
        FILE *pFile = fopen(path, "r");
        if (pFile != NULL)  												// recorro el archivo de texto
        {
            if (!parser_MoviesFromText(pFile, listaMovies))     //con parser cargo lo q hay en el archivo un array de movies
            {

            }
            fclose(pFile);
            pFile = NULL;
            retorno = 1;
        }
    }
    return retorno;
}



int controller_ListMovies(LinkedList *listaMovies)
{
    int retorno = 0;
    int len;
    eMovie* movie;
    if (listaMovies != NULL && movie != NULL)
    {
        len = ll_len(listaMovies);
        for (int i = 0; i < len; i++)
        {
            movie= (eMovie*) ll_get(listaMovies, i);		//muestro array de vuelos
            mostrarMovie(movie);
            retorno = 1;
        }
    }
    system("pause");
    return retorno;
}




                    /////      saves     //////


 int controller_saveAsText(char *path, LinkedList *listaMovies)
{
    int retorno = 0;
    eMovie *movie = movie_newMovie();
    if (path != NULL && listaMovies != NULL && movie != NULL)
    {
        FILE *pFile = fopen(path, "w");
        fprintf(pFile, "ID_PELI,TITULO,GENERO,DURACION\n"); //formateo el encabezado
        for (int i = 0; i < ll_len(listaMovies); i++)   		//recorro el array de movies
        {

            movie = (eMovie*) ll_get(listaMovies, i); //busco el elemento en el indice i y lo retorno en auxiliar movie
            fprintf(pFile, "%d,%s,%s,%.0f\n", movie->id,
                    movie->titulo, movie->genero, movie->duracion);
        }
        ll_clear(listaMovies);
        printf("\nARCHIVO GUARDADO CON EXITO!\n");
        system("pause");
        fclose(pFile);
        retorno = 1;
    }
    return retorno;
}

LinkedList* controller_clonAll(LinkedList *listaMovies)
{
    LinkedList* nuevaLista=NULL;
    if (listaMovies != NULL)
    {

        nuevaLista = ll_clone(listaMovies);
    }
    return nuevaLista;
}
