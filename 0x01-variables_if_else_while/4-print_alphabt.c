#include <stdio.h>

/**
 * main - Starting point of our program
 *
 * Description: this program prints the alphabet in lowercase,
 * followed by a new line except q and e.
 * Return: 0 (success)
 */
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
