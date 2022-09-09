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

	for (; uletter <= 'Z'; uletter++)
	{
		putchar(uletter);
	}

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
