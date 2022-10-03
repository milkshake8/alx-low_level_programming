#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers.
 * @argc: number of arguments of the command line.
 * @argv: array containing arguments of the command line.
 *
 * Return: 1 if the program does not receive two arguments,
 * or 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", a * b);
	return (0);
}
