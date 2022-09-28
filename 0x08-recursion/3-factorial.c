#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer to calculate the factorial
 * Return: -1 if n is negatif or the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return ((n * factorial(n - 1)));
}
