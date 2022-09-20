#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: point to the string to print.
 */
void puts_half(char *str)
{
	int size = strlen(str);
	int i;

	if (size % 2 == 0)
		for (i = (size / 2); i < size; i++)
			_putchar(str[i]);
	else
		for (i = ((size + 1) / 2); i < size; i++)
			_putchar(str[i]);
	_putchar('\n');
}
