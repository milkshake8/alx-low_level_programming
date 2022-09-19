#include "main.h"

/**
 * void swap_int - swaps the values of two integers.
 * @a: the first integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
