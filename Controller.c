#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"
#include "Parser.h"
#include "Controller.h"
#include "LinkedList.h"
#include "filters.h"
#include "movie.h"

/** \brief Carga los datos de los pasajeros desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char *path, LinkedList *arrayListMovies)
{
    int retorno = 0;
    if (path != NULL && arrayListMovies != NULL)
    {
        FILE *pFile = fopen(path, "r");
        if (pFile != NULL)  												// recorro el archivo de texto
        {
            if (!parser_MovieFromText(pFile, arrayListMovies))     //con parser cargo lo q hay en el archivo un array de pasajeros
            {

            }
            fclose(pFile);
            pFile = NULL;
            retorno = 1;
        }
    }
    return retorno;
}

/** \brief Carga los datos de los pasajeros desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
//int controller_loadFromBinary(char *path, LinkedList *pArrayListPassenger) {
//	int retorno = 0;
//	if (path != NULL && pArrayListPassenger != NULL) {
//		FILE *pFile = fopen(path, "rb");
//		if (pFile != NULL) {
//			if (parser_PassengerFromBinary(pFile, pArrayListPassenger)) {
//				retorno = 1;
//			} else {
//
//			}
//		}
//		fclose(pFile);
//		pFile = NULL;
//	}
//	return retorno;
//}

int controller_ListMovies(LinkedList *pListaMovies)
{
    int retorno = 0;
    int len;
    eMovie* movie=NULL;
    if (pListaMovies != NULL)
    {
        len = ll_len(pListaMovies);
        for (int i = 0; i < len; i++)
        {
            movie=ll_get(pListaMovies, i);
            if(movie!=NULL)
            {
                mostrarMovie(movie);
            }
            retorno = 1;
        }
    }
    system("pause");
    return retorno;
}

LinkedList* controller_filterMovies(LinkedList* pListMovies)
{
    LinkedList* auxLista;
    int seguir=1;
    if(pListMovies!=NULL)
    {
        do
        {
            switch(mostrarMenuFilters())
            {
            case 1:
                auxLista=ll_filter(pListMovies, filter_Action);
                seguir=0;
                break;
            case 2:
                auxLista=ll_filter(pListMovies, filter_Adventure);
                seguir=0;
                break;
            case 3:
                auxLista=ll_filter(pListMovies, filter_Comedy);
                seguir=0;
                break;
            case 4:
                auxLista=ll_filter(pListMovies, filter_Documentary);
                seguir=0;
                break;
            case 5:
                auxLista=ll_filter(pListMovies, filter_Drama);
                seguir=0;
                break;
            case 6:
                auxLista=ll_filter(pListMovies, filter_Horror);
                seguir=0;
                break;
            case 7:
                auxLista=ll_filter(pListMovies, filter_Musical);
                seguir=0;
                break;
            case 8:
                auxLista=ll_filter(pListMovies, filter_Romance);
                seguir=0;
                break;
            case 9:
                auxLista=ll_filter(pListMovies, filter_Thriller);
                seguir=0;
                break;
            case 10:
                auxLista=ll_filter(pListMovies, filter_Western);
                seguir=0;
                break;
            default:
                printf("\nOpcion incorrecta, reingrese\n");
                system("pause");
                break;
            }
        }
        while(seguir==1);
    }
    return auxLista;
}

int controller_saveAsText(char* path, LinkedList* pListMovie )
{
    int retorno=0;
    int len;
    FILE* pFile=NULL;
    eMovie* auxMovie;
    if(path!=NULL && pListMovie!=NULL)
    {
         pFile= fopen(path, "w");
        if(pFile!=NULL)
        {
            len=ll_len(pListMovie);
            fprintf(pFile, "ID_PELI,TITULO,GENERO,DURACION\n");
            for(int i=0; i<len ; i++)
            {
                auxMovie=(eMovie*)ll_get(pListMovie, i);
                if(auxMovie!=NULL)
                {
                    fprintf(pFile, "%d,%s,%s,%.2f\n", auxMovie->idPeli,
                                                        auxMovie->titulo,
                                                        auxMovie->genero,
                                                        auxMovie->duracion);
                    retorno=1;

                }else{
                    printf("no existe la pelicula\n");
                    system("pause");

                }
            }
        }
    }
    fclose(pFile);
    return retorno;
}
