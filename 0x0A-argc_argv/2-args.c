#include <stdio.h>

/**
 * main - function that prints all arguments it receives.
 * @argc: number of arguments of the command line.
 * @argv: array containing arguments of the command line.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
