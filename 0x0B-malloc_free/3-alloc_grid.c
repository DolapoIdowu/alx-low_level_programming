#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid- function that returns a pointer to a
 *	2 dimensional array of integers.
 * @width: The size of the inner array.
 * @height: The size of the outer array.
 * Return: a pointer to a 2 dimensional array of integers,
 *	NULL on failure,
 *	If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *ptr;
	int **d_array_ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(width * height * sizeof(int));
	if (ptr == 0)
		return (NULL);
	**d_array_ptr = malloc(sizeof(int*) * width);
	if (d_array_ptr == 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		d_array_ptr[i] = ptr + (i * hieght);
	}
	return (d_array_ptr);
}
