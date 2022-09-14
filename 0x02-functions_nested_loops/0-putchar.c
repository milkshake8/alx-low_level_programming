#include <stdio.h>

/**
 * main - program that prints _putchar
 *
 * Description: This program prints _putchar,
 * followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char p[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	for (i = 0 ; i < 8 ; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
