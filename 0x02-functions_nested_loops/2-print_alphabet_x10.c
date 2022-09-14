#include "main.h"

/**
 * print_alphabet_x10- print 10x alphabelt
 */
void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		num++;
	}
}
