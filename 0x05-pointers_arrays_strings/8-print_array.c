#include "main.h"

/**
 * print_array- a function that prints n elements of an array
 *	of integers, followed by a new line.
 * @a: the array to work on.
 * @n: number of elements of the array to be printed.
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
		i++;
	}
	printf("\n");
}
