#include "filters.h"


int mostrarMenuFilters()
{
    system("cls");
    int opcion;
    printf("\n                      **************************                      \n");
    printf("                      *** FILTRAR POR GENERO ***                     \n");
    printf("                      **************************                     \n\n");
    printf("1. FILTRAR GENERO ACCION\n");
    printf("2. FILTRAR GENERO AVENTURA\n");
    printf("3. FILTRAR GENERO COMEDIA\n");
    printf("4. FILTRAR GENERO DOCUMENTALES\n");
    printf("5. FILTRAR GENERO DRAMA\n");
    printf("6. FILTRAR GENERO HORROR\n");
    printf("7. FILTRAR GENERO MUSICAL\n");
    printf("8. FILTRAR GENERO ROMANTICO\n");
    printf("9. FILTRAR GENERO THRILLER\n");
    printf("10. FILTRAR GENERO WESTERN\n");
    printf("7. SALIR\n\n");
    printf("INGRESE OPCION: ");
    scanf("%d", &opcion);
    fflush(stdin);
    return opcion;
}



int filter_Action(void* a)
{
    int retorno=0;
    eMovie* movie = (eMovie*)a;
    if(movie!=NULL)
    {
        if(strcmp(movie->genero, "Action")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Adventure(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Adventure")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Comedy(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Comedy")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Documentary(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Documentary")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Drama(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Drama")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Horror(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Horror")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Musical(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Musical")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Romance(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Romance")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Thriller(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Thriller")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}

int filter_Western(void* a)
{
    int retorno=0;
    if(a!=NULL)
    {
        eMovie* movie = (eMovie*)a;
        if(strcmp(movie->genero, "Western")==0)
        {
            retorno=1;
        }
    }
    return retorno;
}
