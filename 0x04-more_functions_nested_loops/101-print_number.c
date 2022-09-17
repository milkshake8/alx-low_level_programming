#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: value of the integer to print
 *
*/
void print_number(int n)
{
	unsigned int i, j, counter;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	counter = 1;

	while (j > 9)
	{
		j /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((i / counter) % 10) + 48);
	}
}
