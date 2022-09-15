#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: This function prints the alphabet
 * in lowercase 10 times, followed by a new line.
 * Return: Notthing is returned(void)
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	j++;
	}
}
