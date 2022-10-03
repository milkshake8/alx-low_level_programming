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
	int i = 1, sum = 0, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
