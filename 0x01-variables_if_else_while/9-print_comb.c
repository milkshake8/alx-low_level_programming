#include<stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: a program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
