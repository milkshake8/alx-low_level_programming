#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: points to the desnation string.
 * @src: points to the source string.
 * @n: the number of bytes to copy
 *
 * Return: point to the value of the final string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pt = dest;

	while (*dest >= 0)
	{
		if (*dest == '\0')
		{

			while (*src != *(src + n) && n > 0)
			{
				*dest = *src;
				dest++;
				src++;
				n--;
			}
			break;
		}
		dest++;
	}
	*dest = '\0';
	return (pt);
}
