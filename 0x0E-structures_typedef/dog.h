#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog -> a dog structure
 * struct dog_t -> a now dog structure.
 * @name: dog name
 * @age: dog age
 * @owner: dog onwner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
/* void free(dog_t *d);
 */

#endif	/* dog_h */
