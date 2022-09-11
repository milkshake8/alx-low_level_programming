#include<stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: a program that prints all possible
 * combinations of two digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
	{
		int j;

		for (j = n + 1; j < 10 ; j++)
		{
			putchar(n + '0');
			putchar(j + '0');
			if (n != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
