#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: This function prints the alphabet
 * in lowercase, followed by a new line.
 * Return: Notthing is returned(void)
 */
void print_alphabet(void)
{
		char i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
