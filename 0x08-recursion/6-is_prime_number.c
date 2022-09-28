#include "main.h"

/**
 * is_prime_number_first - check if a number is a prime number.
 * @n: the number to check.
 * @y: the second parameter used to make the calcul.
 *
 * Return: 0 if the number is not a prime number or 1 if yes.
 */
int is_prime_number_first(int n, int y)
{
	if (n % y == 0)
		return (0);
	y++;
	if (y == n)
		return (1);
	return (is_prime_number_first(n, y));
}

/**
 * is_prime_number - Check if a number is a prime number
 * by calling another function
 * @n: Number to check
 *
 * Return: 0 if the number is less than ! or equal
 * 1 if the number is 2 or call the function is_prime_number_first.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_number_first(n, 2));
}
