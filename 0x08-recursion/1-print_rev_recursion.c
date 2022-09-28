#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: point to the string to print.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
