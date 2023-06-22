#include "dog.h"

/**
 * print_dog -> prints a struct dog.
 * @d: the stuct tag.
 *
 * Return: Nothing if d is empty, and 0 on success.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner ==  NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
