#include "main.h"

/**
 * _sqrt_recursion_first - function that returns the natural
 * square root of a number.
 * @n: integer to check the natural square
 * @y: second parameter used for the calcul.
 *
 * Return: -1 if the doesn't have a natural square root or the
 * square root of the number.
 */
int _sqrt_recursion_first(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y > n)
		return (-1);
	y++;
	return (_sqrt_recursion_first(n, y));
}

/**
 * _sqrt_recursion - a function that call another function
 * to return the natural square root of a number.
 * @n: integer to check the natural square
 *
 * Return: 0 if the number is 0 or call another function if the
 * number is different of 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (_sqrt_recursion_first(n, 1));
	return (0);
}
