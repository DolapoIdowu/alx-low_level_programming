#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	int n = 0;
	int m;

	for (; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');

			if (n == 8 && m  == 9)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
