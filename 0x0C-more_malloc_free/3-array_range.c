#include "main.h"
#include <stdlib.h>

/**
 * array_range- a function that creates an array of integers.
 * @min: the first element of the array.
 * @max: the last element of the array.
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *array_ptr;
	int i, t = min, p = max;

	if (min > max)
		return (NULL);
	array_ptr = malloc(((max - min) + 1) * sizeof(int));
	if (array_ptr == NULL)
		return (0);
	i = 0;
	while (t <= p && i)
	{
		array_ptr[i] = t;
		t++;
		i++
	}
	return (array_ptr);
}
