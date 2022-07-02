#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "menu.h"
#include "Controller.h"
#include "filter.h"
#include "ordenamiento.h"



int main()
{
    int seguir=1;
    int auxInt;
    LinkedList* listaMovies = ll_newLinkedList();   // crea un nuevo LinkedList
    LinkedList* listaAuxiliar = ll_newLinkedList();  // crea un nuevo LinkedList

    if(listaMovies == NULL && listaAuxiliar != NULL)
    {
        printf("No se pudo conseguir espacio en memoria");
        exit(1);
    }

    do
    {
        switch(menu())
        {

        case 1:
            controller_loadMoviesFromText("movies.csv", listaMovies);
            break;
        case 2:
            controller_ListMovies(listaMovies);
            break;
        case 3:
            listaAuxiliar=ll_map(listaMovies, generarAleatorio);
            controller_ListMovies(listaAuxiliar);
            break;
        case 4:
            switch(menuGenero())
            {
            case 1:
                listaAuxiliar=ll_filter(listaMovies, filtrarGeneroAdventure);
                break;
            case 2:
                listaAuxiliar=ll_filter(listaMovies, filtrarGeneroComedy);
                break;
            case 3:
                listaAuxiliar=ll_filter(listaMovies, filtrarGeneroDrama);
                break;
            case 4:
                listaAuxiliar=ll_filter(listaMovies, filtrarGeneroRomance);
                break;
            case 5:
                listaAuxiliar=ll_filter(listaMovies, filtrarGeneroAction);
                break;
            case 6:
                listaAuxiliar=ll_filter(listaMovies, filtrarGeneroMusical);
                break;
            default:
                break;
            }
            controller_saveAsText("generoFiltrado.csv", listaAuxiliar);
            break;
        case 5:
            ll_sort(listaMovies, movie_sortGeneroDuracion, 1);

            break;
        case 6:
            controller_saveAsText("savePeliculas.csv", listaMovies);
            break;
        case 7:
            printf("chau!");
            seguir=0;
            break;
        default:
            printf("opcion invalida");
            break;
        }
    }
    while(seguir==1);

    return 0;
}
