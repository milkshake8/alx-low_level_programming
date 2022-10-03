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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
