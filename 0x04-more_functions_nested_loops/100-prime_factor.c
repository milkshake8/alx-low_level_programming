#include <stdio.h>

/**
 * main - finds and prints the largest prime
 * factor of the number 612852475143
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
