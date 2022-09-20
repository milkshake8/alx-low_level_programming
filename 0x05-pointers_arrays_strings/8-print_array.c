#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: point to the array to print
 * @n: the length of the array to print
 */
void print_array(int *a, int n)
{
	int i;
	
	if ( n > 0)
	{
		for (i = 0; i < n; i++)
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
	}
}
