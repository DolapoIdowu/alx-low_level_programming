#include "main.h"

/**
 * print_triangle- prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			int m = 1;

			while (m <= n)
			{
				if (m <= n - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				m++;
			}
			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
