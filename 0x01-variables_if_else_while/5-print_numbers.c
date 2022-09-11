#include <stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: This program prints all single digit numbers
 * of base 10 starting from 0.
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
