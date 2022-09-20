#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0, j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((i + j) > 2772)
			break;
		j = i + j;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
