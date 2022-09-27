#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: point to the string.
 * @c: the searched character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	char *pt_c = &c;

	while (*s != '\0')
	{
		if (*s == *pt_c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
