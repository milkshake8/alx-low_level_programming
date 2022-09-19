#include "main.h"
#include <string.h>
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: point to the address of the string to print out.
 */
void _puts(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
}
