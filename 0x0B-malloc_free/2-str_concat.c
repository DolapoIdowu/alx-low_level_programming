#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat- concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: pointer should point to a newly allocated space
 *	in memory which contains the contents of s1,
 *	followed by the contents of s2, and null terminated,
 *	and return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	j = 0;
	while (s2[j] != '\0' && j <= len2)
	{
		s1[len1] = s2[j];
		j++;
		len1++;
	}
	s1[len1] =  '\0';
	new_string = malloc(len1 * sizeof(char));
	if (new_string == 0)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];
	return (new_string);
}
