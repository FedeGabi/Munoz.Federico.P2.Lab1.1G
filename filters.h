#ifndef FILTERS_H_INCLUDED
#define FILTERS_H_INCLUDED
#include <string.h>
#include "movie.h"

int mostrarMenuFilters();

int filter_Action(void* a);

int filter_Adventure(void* a);

int filter_Comedy(void* a);

int filter_Documentary(void* a);

int filter_Drama(void* a);

int filter_Horror(void* a);

int filter_Musical(void* a);

int filter_Romance(void* a);

int filter_Thriller(void* a);

int filter_Western(void* a);

#endif // FILTERS_H_INCLUDED
