#include "main.h"
/**
 * print_square- prints a square, followed by a new line.
 * @size: the size of the square.
 *
 * Return: nothing.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			int m = 1;

			while (m <= size)
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

