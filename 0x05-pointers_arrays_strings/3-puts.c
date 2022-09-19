#include "main.h"
#include <string.h>
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: point to the address of the string to print out.
 */
void _puts(char *str)
{
	long int i;


	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
}
