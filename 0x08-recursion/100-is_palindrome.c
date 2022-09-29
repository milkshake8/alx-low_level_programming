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
 * palindrome_check - check if a string is a palindrome.
 * @s: point to the string
 * @size: number of characters of the string
 *
 * Return: 1 (success) or 0 (fail).
 */
int palindrome_check(char *s, int size)
{
	if (size <= 1)
		return (1);

	if (*s == *(s + size - 1))
	{
		s++;
		size -= 2;
		return (palindrome_check(s, size));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: point to the string.
 *
 * Return: 1 (success) or 0 (fail).
 */
int is_palindrome(char *s)
{
	int size = check_size(s, 0);

	return (palindrome_check(s, size));
}
