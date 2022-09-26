#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: point to the buffer to fill
 * @b: used byte to fill the buffer
 * @n: number of bytes to fill
 * Return: the pointer to the filed file
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *pt_b = &b;

	for (i = 0 ; i < n; i++)
	{
		s[i] = *pt_b;
	}
	return (s);
}
