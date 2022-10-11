#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog- initialize struct dog.
 * @d: dog variable.
 * @name: name of dog.
 * @age: dog age.
 * @owner: dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
