#include "dog.h"

/**
 * init_dog -> initiaalizes variables of type struct
 * @d: object of the structure
 * @name: name for tthe dog
 * @age: dog aage
 * @owner: dog owner
 *
 * Return: 0 on success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
