#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: point to the destination
 * @src: point to the source
 *
 * Description: Concatenates two strings and return the
 * value of the concatenate string.
 * Return: The vallue of the concatenate string.
 */
char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*dest >= 0 && *dest <= 255)
	{
		if (*dest == '\0')
		{
			while (*src != '\0')
			{
				*dest = *src;
				dest++;
				src++;
			}
			break;
		}
		dest++;
	}
	*dest = '\0';
	return (pt);
}
