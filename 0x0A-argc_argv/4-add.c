#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main- adds positive numbers.
 * @argc: number of argument.
 * @argv: arrays of string argument.
 * Return: 0 if no number is inputedd,
 *	if there is result,but 1 otherwise.
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;
	int num;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[argc]);
			sum += num;
		}
	printf("%d\n", sum);
	}
	return (0);
}
