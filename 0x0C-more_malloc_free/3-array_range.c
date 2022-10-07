#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int *T;
	int i, sizeT = 0;

	if (min > max)
		return (NULL);
	sizeT = max - min + 1;
	T = malloc(sizeT * sizeof(int));
	if (T == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		T[i] = i;
	return (T);
}

























