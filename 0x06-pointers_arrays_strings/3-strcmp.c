#include "main.h"

/**
 * _strcmp- a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
