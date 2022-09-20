#include "main.h"

/**
 * puts_half- function should print the second half of the string
 *	If the number of characters is odd,
 *	the function should print the last n
 *	characters of the string, where
 *	n = (length_of_the_string - 1) / 2
 * @str: string to be worked on.
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	int n;
	int i = 0;

	while (str[len] != '\0')
	{
		++len;
	}
	len -= 1;

	if (len % 2 == 0)
	{
		n = len / 2;

		while (n <= len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (len / 2) - 1;

		while (n <= len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
