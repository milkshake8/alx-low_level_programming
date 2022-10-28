#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: total of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	unsigned int count = 0;

	p = n ^ m;

	while (p != 0)
	{
		if ((p & 1) == 1)
			count++;
		p = p >> 1;
	}
	return (count);
}
