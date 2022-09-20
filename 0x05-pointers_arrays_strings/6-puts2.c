#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: point to the array to print.
 */
void puts2(char *str)
{
	int size = strlen(str);
	int i;

	for (i = 0; i < size; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
