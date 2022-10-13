#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
