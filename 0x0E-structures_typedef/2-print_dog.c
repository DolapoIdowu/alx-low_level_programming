#include "dog.h"
#include <stdio.h>

/**
 * print_dog- prints a struct dog
 * @d: dog ptr.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nill)\n");

		printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nill)\n");
	}
}
