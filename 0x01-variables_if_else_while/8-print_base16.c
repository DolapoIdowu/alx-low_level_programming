#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	char letter = 'a';
	int n = 0;

	for (; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
