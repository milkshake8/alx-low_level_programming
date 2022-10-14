#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0, vali, j;
	char valc;
	double valf;
	char *vals;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
		{
			valc = va_arg(args, int);
			printf("%c", valc);
			break;
		}
		case 'i':
		{
			vali = va_arg(args, int);
			printf("%d", vali);
			break;
		}
		case 'f':
		{
			valf = va_arg(args, double);
			printf("%f", valf);
			break;
		}
		case 's':
		{
			vals = va_arg(args, char *);
			if (vals)
			{
				j = 0;
				while (vals[j] != '\0')
				{
					putchar(vals[j]);
					j++;
				}
			}
			else
			{
				printf("(nil)");
			}
			break;
		}
		}
		switch (format[i])
		{
		case 'c':
		case 'i':
		case 's':
		case 'f':
		{
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
