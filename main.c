#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "inputs.h"
#include "ordenamientos.h"
#include "mapeo.h"

int main()
{
    int seguir=1;
    LinkedList* listaMovies= ll_newLinkedList();
    LinkedList* listaNueva= ll_newLinkedList();
    LinkedList* listaFiltrada = ll_newLinkedList();
    if(listaMovies==NULL || listaNueva ==NULL || listaFiltrada == NULL)
    {
        printf("No se pudo conseguir memoria\n");
        exit(1);
    }
    do{
        switch(mostrarMenuPrincipal())
        {
            case 1:
                if(controller_loadFromText("movies.csv", listaMovies))
                {
                    printf("Archivo cargado");
                    system("pause");
                }
                break;
            case 2:
                if(ll_len(listaMovies)!=0)
                {
                    controller_ListMovies(listaMovies);
                }
                else{
                    printf("Lista vacia\n");
                    system("pause");
                }
                break;
            case 3:
                if(ll_len(listaMovies)!=0)
                {
                    listaNueva=ll_map(listaMovies, asignarDuracion);
                    controller_ListMovies(listaNueva);
                }
                else{
                    printf("Lista vacia\n");
                    system("pause");
                }
                break;
            case 4:
                listaFiltrada=controller_filterMovies(listaNueva);
                controller_ListMovies(listaFiltrada);
                controller_saveAsText("FilterGenero.csv", listaFiltrada);
                break;
            case 5:
                if(ll_len(listaMovies)!=0)
                {
                    ll_sort(listaMovies, ordenarPeliculasPorGeneroYduracion, 1);
                    controller_ListMovies(listaMovies);
                }
                else{
                    printf("Lista vacia\n");
                    system("pause");
                }
                break;
            case 6:
                if(ll_len(listaMovies)!=0)
                {
                    controller_saveAsText("ordenadasGeneroDuracion.csv", listaMovies);
                    printf("Archivo guardado con exito\n");

                }
                else{
                    printf("Lista vacia\n");
                    system("pause");
                }
                break;
            case 7:
                printf("ADIOS!\n");
                seguir=0;
                break;
        }

    }while(seguir==1);
    return 0;
}
