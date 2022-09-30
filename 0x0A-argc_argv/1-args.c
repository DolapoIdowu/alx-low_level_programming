#include "main.h"
#include <stdio.h>

/**
 * main- prints the number of arguments aside from program name.
 * @argc: number of argument.
 * @argv: arrays of string argument.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count, i;

	count = 0;
	for (i = 1; i < argc; i++)
		count += 1;
	printf("%d\n", count);
	return (0);
}
