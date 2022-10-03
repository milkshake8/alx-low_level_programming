#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers.
 * @argc: number of arguments of the command line.
 * @argv: array containing arguments of the command line.
 *
 * Return: 1 if the program does not receive two arguments,
 * or 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
