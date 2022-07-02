#include "menu.h"

int menu()
{
    system("cls");
    int opcion;
    printf("1. Cargar archivo. \n");
    printf("2. imprimir lista. \n");
    printf("3. asignar tiempos \n");
    printf("4. filtrar por tipo \n");
    printf("5. mostrar duraciones\n");
    printf("6. guardar peliculas\n");
    printf("7. salir\n");
    scanf("%d", &opcion);
    return opcion;
}


int menuGenero()
{
    system("cls");
    int opcion;
    printf("1. Adventure. \n");
    printf("2. Comedy. \n");
    printf("3. Drama. \n");
    printf("4. Romance\n");
    printf("5. Action\n");
    printf("6. Musical\n");
    printf("7. salir\n");
    scanf("%d", &opcion);
    return opcion;
}
