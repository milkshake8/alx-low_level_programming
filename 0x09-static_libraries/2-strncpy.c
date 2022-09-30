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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
