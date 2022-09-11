#include<stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	int n, j = 97;

	for (n = 0; n < 10; ++n)
	{
		putchar(n + '0');
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
