#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers.
 * @argc: number of argument.
 * @argv: arrays of string argument.
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (1);
}
