#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of the array to create
 * @c: the char which fills the array.
 *
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (0);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
