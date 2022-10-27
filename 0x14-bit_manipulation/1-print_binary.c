#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to print.
 */
void print_binary(unsigned long int n)
{
	unsigned long m = n;

	if (m > 1)
	{
		print_binary(m >> 1);
	}
	_putchar((m & 1) + '0');
}
