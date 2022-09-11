#include<stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: a program that prints all possible
 * combinations of two two-digits.
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		int j;

			for (j = 0; j < 100 ; j++)
			{
				if (n < j)
				{
					putchar((n / 10) + '0');
					putchar((n % 10) + '0');
					putchar(' ');
					putchar((j / 10) + '0');
					putchar((j % 10) + '0');
					if (n != 98 || j != 99)
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
