#include <stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: this program prints the alphabet
 * in lowercase in reverse, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
