#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup- returns a pointer to a newly allocated space
 *	in memory, which contains a copy of the
 *	string given as a parameter.
 * @str: string to be duplicated.
 * Return: NULL if str = NULL,
 *	a pointer to the duplicated string,
 *	NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *new_string;
	unsigned int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	if (str == NULL)
		return (NULL);
	new_string = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		new_string[i] = str[i];
	}
	str[i] = '\0';
	return (new_string);
}
