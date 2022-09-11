#include <stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: This program prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	int i = 97, j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
