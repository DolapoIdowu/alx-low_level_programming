#include "main.h"
#include <stdio.h>

/**
 * main- prints out program name.
 * @argc: number of command line argument.
 * @argv: the array of string arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}
