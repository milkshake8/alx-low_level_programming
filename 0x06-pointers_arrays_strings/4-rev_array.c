#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: point to the array to reverse
 * @n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
