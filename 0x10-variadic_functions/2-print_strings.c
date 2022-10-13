#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;
	char *value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);
		if (value)
		{
			j = 0;
			while (value[j] != '\0')
			{
				putchar(value[j]);
				j++;
			}
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
