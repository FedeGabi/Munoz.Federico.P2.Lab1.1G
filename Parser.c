
#include "Parser.h"

int parser_MoviesFromText(FILE *pFile, LinkedList* listaMovies) {
	int retorno = 0;
	eMovie* movie;
	if (pFile != NULL && listaMovies != NULL) {
		int cant;
		char buffer[4][100];
		fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[0],buffer[1],buffer[2], buffer[3]);  //lectura fantasma
		ll_clear(listaMovies);
		while (!feof(pFile)) {

			cant = fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1],buffer[2], buffer[3]);

			if (cant == 4 && movie != NULL) {
				movie = movie_parametros(buffer[0], buffer[1],buffer[2], buffer[3]);
				ll_add(listaMovies, movie);
				retorno = 1;

			} else {
				printf("[error] - parser no completado\n");
				exit(1);
			}
		}
		//Passenger_delete(pasajero);
		//pasajero = NULL;
	}
	return retorno;
}
