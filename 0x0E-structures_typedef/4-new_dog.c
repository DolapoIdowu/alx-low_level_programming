#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog- create new  dog.
 * @name: name of new dog.
 * @age: age of new dog
 * @owner: owner of new dog.
 * Return: New dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int i = 0, j = 0, k;

	while (name[i] != '\0')
		i++;

	while (owner[j] != '\0')
		j++;
	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	nw_dog->name = malloc((i + 1) * sizeof(nw_dog->name));
	if (nw_dog->name == NULL)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		nw_dog->name[k] = name[k];
	nw_dog->age = age;
	nw_dog->owner = malloc((j + 1) * sizeof(nw_dog->owner));
	if (nw_dog->owner == NULL)
	{
		free(nw_dog->owner);
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		nw_dog->owner[k] = name[k];
	return (nw_dog);
}
