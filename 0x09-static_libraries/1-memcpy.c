#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: point to the destination arrea
 * @src: point to the source arrea
 * @n: number of bytes to copy
 * Return: the pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
