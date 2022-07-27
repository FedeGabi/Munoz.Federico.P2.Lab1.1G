#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED


int controller_loadFromText(char* path , LinkedList* pArrayListPassenger);
int controller_loadFromBinary(char* path , LinkedList* pArrayListPassenger);
int controller_saveAsText(char* path , LinkedList* pArrayListPassenger);
int controller_saveAsBinary(char* path , LinkedList* pArrayListPassenger);
int controller_ListMovies(LinkedList *pListaMovies);
LinkedList* controller_filterMovies(LinkedList* pListMovies);

#endif // CONTROLLER_H_INCLUDED
