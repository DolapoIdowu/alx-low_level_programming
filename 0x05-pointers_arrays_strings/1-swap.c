#include "main.h"
/**
 * swap_int -a function that swaps the values of two integers.
 * @a: integer to be swapped.
 * @b: integer ro be swpped.
 *
 * Rwturn: nothing.
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}

