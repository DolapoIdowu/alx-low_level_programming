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
	int *d_array_ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	d_array_ptr = malloc(width * height * sizeof(int));
	if (d_array_ptr == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0, j < width; j++)
		{
			*(d_array_ptr + (i * width + j)) = 0;
		}
	}
	return (d_array_ptr);
}
