#include <stdio.h>

/**
 * main - function that prints the number of arguments of the command line.
 * @argc: number of arguments of the command line.
 * @argv: array containing arguments of the command line.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	(void)argv;
	return (0);
}
