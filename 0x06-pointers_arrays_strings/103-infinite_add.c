#include "main.h"

/**
 * infinite_add - function that adds two numbers.
 * @n1: point to the first number
 * @n2: point to the second number
 * @r: the buffer that store the result
 * @size_r: the size of the buffer
 *
 * Return: sum of the two integers.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		i2++;

	*r = *(r + size_r);
	while (n1[i] > 0 || n1[j] > 0)
	{
		if (n1[i] + n2[j] > 0)
			*r = n1[i - 1] + n2[j - 1] + 1;
		else
			*r = n1[i] + n2[j];
		i--;
		j--;
	}
	return (r);
}
