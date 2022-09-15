#include "main.h"
/**
 * print_square- prints a square, followed by a new line.
 * @size: the size of the square.
 *
 * Return: nothing.
 */
void print_square(int size)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			int m = 1;

			while (m <= n)
			{
				_putchar('#');
				m++;
			}

			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
