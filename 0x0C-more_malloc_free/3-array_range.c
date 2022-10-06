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
	int i;

	if (min > max)
		return (NULL);
	array_ptr = malloc(max * sizeof(int));
	if (array_ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max && i)
	{
		array_ptr[i] = min;
		min++;
		i++
	}
	return (array_ptr);
}
