#include "dog.h"

/**
 * new_dog -> a function that creates new struct
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: 0 on success.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, m, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (n = 0; name[n]; n++)
		;
	n++;

	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;

	for (m = 0; owner[m]; m++)
		;
	m++;

	dog->owner = malloc(m * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < m; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
