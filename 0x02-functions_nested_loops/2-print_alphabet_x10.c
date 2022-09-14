#include "main.h"

/**
 * print_alphabet_x10- print 10x alphabelt
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		num++;
		_putchar('\n')
	}
}
