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
	dog_t *new_dog;
	int i = 0, j = 0, k;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(i * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		new_dog->name[k] = name[k];
	new_dog->age = age;
	new_dog->owner = malloc(i * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		new_dog->owner[k] = name[k];
	return (new_dog);
}
