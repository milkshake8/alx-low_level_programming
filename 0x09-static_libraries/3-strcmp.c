#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: point to the first string.
 * @s2: point to the second string.
 *
 * Return: a value depending on the result of the
 * comparison
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
