#include <stdio.h>
#include <stdlib.h>
int numb_coins(int n);

/**
 * main - function that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments of the command line.
 * @argv: array containing arguments of the command line.
 *
 * Return: 1 if the program does not receive two arguments,
 * or 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, numb_of_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);
	numb_of_coins = numb_coins(n);
	printf("%d\n", numb_of_coins);
	return (0);
}

/**
 * numb_coins - function that returns the minimum number of coins
 * to make change for an amount of money.
 * @n: the given amount of money
 *
 * Return: 1 if the program does not receive two arguments,
 * or 0 (Success)
 */
int numb_coins(int n)
{
	int r;

	if (n == 0)
		return (0);
	if (n >= 1)
		r = 1;
	if (n >= 2)
		r = 2;
	if (n >= 5)
		r = 5;
	if (n >= 10)
		r = 10;
	if (n >= 25)
		r = 25;
	return ((n / r) + numb_coins(n % r));
}
