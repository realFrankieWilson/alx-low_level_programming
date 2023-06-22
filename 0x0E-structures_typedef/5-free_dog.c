#include "dog.h"

/**
 * free_dog -> A fucntion that frees dogs.
 * @d: dogs to be freed.
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
