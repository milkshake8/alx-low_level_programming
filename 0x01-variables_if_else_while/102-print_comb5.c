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

	for (n = 0; n < 10; ++n)
	{
		int j;

		for (j = 0; j < 9 ; j++)
		{
			int k;

			for (k = 0; k < 10; k++)
			{
				int l;

				for (l = 1; l < 10; l++)
				{
					putchar(n + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (n != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
