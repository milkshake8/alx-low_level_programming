include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9 excpet 2 and 4
 * followed by a new line.
 *
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
