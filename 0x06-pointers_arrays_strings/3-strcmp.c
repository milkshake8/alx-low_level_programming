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
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i] && s1[i] != '\0' && s2[i] != '\0')
			return (15);
		else if (s1[i] < s2[i] && s1[i] != '\0' && s2[i] != '\0')
			return (-15);
		else if (s1[i] == '\0')
			return (15);
		else if (s2[i] == '\0')
			return (-15);
		i++;
	}
	return (0);
}
