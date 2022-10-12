#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: the arraywich contains the lements
 * @size: the size of the array
 * @action: poit to the action to execute on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action && array != NULL)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
