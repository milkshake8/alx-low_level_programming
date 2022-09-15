#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the tested number to print its last digit
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_n;

	if (n < 0)
		n = -n;

	last_n = n % 10;
	_putchar(last_n + '0');
	return (last_n);
}
