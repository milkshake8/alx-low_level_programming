#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int size1 = 0, size2 = 0, size3, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}
	if (n >= size2)
		n = size2;
	size3 = size1 + n + 1;
	s = malloc((size3) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size3; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else if (i >= size1 && i != size3 - 1)
		{
			if (j < n)
			{
				s[i] = s2[j];
				j++;
			}
		}
		else
			s[i] = '\0';
	}
	return (s);
}
