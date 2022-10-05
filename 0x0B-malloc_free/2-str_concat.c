#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 *
 * Return: pointer to the concatenate string.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, total_size = 0, i = 0, j = 0;
	char *s = NULL;

	if (s1 == NULL && s2 == NULL)
		return (s);
	while (*(s1 + i) != '\0')
	{
		size1++;
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		size2++;
		i++;
	}
	i = 0;
	total_size = size1 + size2 + 1;
	s = malloc(total_size * sizeof(char));
	if (s == NULL)
		return (0);
	while (i < total_size - 1)
	{
		if (i >= 0 && i < size1)
			s[i] = s1[i];
		if (i >= size1)
		{
			s[i] = s2[j];
			j++;
		}
		i++;
	}
	return (s);
}
