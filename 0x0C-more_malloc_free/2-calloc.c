#include "main.h"
#include "stdlib.h"

/**
 * _calloc- allocates memory for an array, using malloc.
 * @nmemb: size of array.
 * @size: size of the data type.
 * Return: pointer to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array_ptr = malloc(nmemb * size);
	if (array_ptr == NULL)
		return (NULL);
	if (size != sizeof(char))
	{
		for (i = 0; i < nmemb; i++)
			array_ptr[i] = 0;
	}	return (array_ptr);
	else
	{
		for (i = 0; i < nmemb - 1; i++)
			array_ptr[i] = 0;
		array_ptr[i] = '\0';
		return (array_ptr);
	}
}
