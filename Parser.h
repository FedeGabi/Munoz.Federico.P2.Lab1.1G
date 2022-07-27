#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED
#include "LinkedList.h"
#include "movie.h"
int parser_MovieFromText(FILE* pFile, LinkedList* arrayListMovies);
int parser_PassengerFromBinary(FILE *pFile, LinkedList *pArrayListPassenger);
#endif // PARSER_H_INCLUDED
