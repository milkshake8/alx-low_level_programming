#include "main.h"

/**
* print_sign - prints prints the sign of a number
* @n: argument passed
* Return: 1 if n is positif, 0 if n is zero and
* -1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
