#include<stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: a program that prints all possible
 * combinations of three digits.
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
			int k;

			for (k = j + 1; k < 10; k++)
			{
				putchar(n + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (n != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
