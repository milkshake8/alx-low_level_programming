#include "function_pointers.h"

/**
 * int_index - that searches for an integer
 * @array: point to the array in wich we search the integer.
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: returns the index of the first element for which the cmp
 * function does not return 0 or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp && array && size > 0)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
