#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: point to the number
 * @index: the index of th bit to set to 1
 *
 * Return: 1 (success) or 0 (failed).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);
}
