#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/****** Libraries ******/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***** Functions *******/
int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
int jump_search(int *, size_t, int);
int interpolation_search(int *, size_t, int);

#endif
