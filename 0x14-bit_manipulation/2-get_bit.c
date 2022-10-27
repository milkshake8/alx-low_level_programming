#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the given number
 * @index: index of the bit to print.
 *
 * Return: the bit at the index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n  = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
