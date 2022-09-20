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
	char *pt = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return pt;
}
