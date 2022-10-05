#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: point to the string to copy
 *
 * Return: pointer to the new allocated memory.
 */
char *_strdup(char *str)
{
	char *s;
	int size = 0, i = 0;

	if (str == NULL)
		return (0);
	while (*(str + i) != '\0')
	{
		size++;
		i++;
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
