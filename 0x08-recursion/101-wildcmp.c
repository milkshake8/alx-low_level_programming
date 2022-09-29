#include "main.h"

/**
 * check_size - function that returns the size of a string.
 * @s: point to the string
 * @size: integer wich hold the value of the length
 *
 * Return: the size of the string.
 */
int check_size(char *s, int size)
{
	if (*s != '\0')
	{
		size += 1;
		return (check_size((s + 1), size));
	}
	return
		size;
}

/**
 * check_wildcomp - function that check if two string can be
 * considered as equal.
 * @s2: point to the second string.
 * @s1: point to the first string.
 * @size2: size of the second string.
 *
 * Return: 1 (success) or 0 (fail)
 */
int check_wildcomp(char *s2, char *s1, int size2)
{
	if (size2 - 1 == 0)
	{
		if (*(s2 + size2 - 1) == '*' || *(s2 + size2 - 1) == *s1)
			return (1);
		return (0);
	}
	if (*(s2 + size2 - 1) == '.')
	{
		if (size2 - 2 == 0)
		{
			if (*(s2 + size2 - 2) == '*')
				return (1);
			return (0);
		}
	}
	size2--;
	return (check_wildcomp(s2, s1, size2));
}

/**
 * wildcmp - function that compares two strings.
 * @s2: point to the second string.
 * @s1: point to the first string.
 *
 * Return: 1 (success) or 0 (fail).
 */
int wildcmp(char *s1, char *s2)
{
	int size1 = check_size(s1, 0);
	int size2 = check_size(s2, 0);

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	if (*(s2 + size2 - 1) != '*' && *(s2 + size2 - 1) != *(s1 + size1 - 1))
		return (0);
	size2--;
	return (check_wildcomp(s2, s1, size2));
}

























