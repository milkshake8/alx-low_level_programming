#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: point to the destination
 * @src: point to the source.
 * @n: the number of character to copy.
 *
 * Return: point to the new string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pt = dest;

	while (*src != *(src + n) && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (pt);
}
