#include "main.h"
/**
 * print_diagonal- draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			int m = 1;

			while (m != i)
			{
				_putchar(' ');
				m++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	else
	{
		_putchar('\n');
	}

}

