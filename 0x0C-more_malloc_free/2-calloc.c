#include "main.h"


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *check;
	check = calloc(size, nmemb);
	if (nmemb == 0 || size == 0)
		return (NULL);
	else if (check == NULL)
		return (NULL);
	else
		return (check);
}
