#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: point to the buffer
 * @src: point to the source we have to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int size = strlen(src);
	int i;

	for (i = 0; i < size; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
