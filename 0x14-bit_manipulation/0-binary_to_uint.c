#include "main.h"

/**
 * _pow - function that elevate a power of a number
 * @x: the number to compute the power
 * @y: the maximum power
 *
 * Return: the power of yhe number.
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int mul = 1;

	for (; y > 0; y--)
		mul *= x;
	return (mul);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: point to the string to convert.
 *
 * Return: the converted number or 0 if it failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, size = 0, numb = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		size++;
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		numb += (b[i] - 48) * _pow(2, (size - i - 1));
		i++;
	}
	return (numb);
}
