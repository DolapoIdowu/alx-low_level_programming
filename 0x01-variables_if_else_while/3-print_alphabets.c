#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	char uletter = 'A';
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (; uletter <= 'Z'; uletter++)
	{
		putchar(uletter);
	}

	putchar('\n');

	return (0);
}
