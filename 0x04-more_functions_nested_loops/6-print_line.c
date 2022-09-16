#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: The number of underscore to print.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n + 1; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
