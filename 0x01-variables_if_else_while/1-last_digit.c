#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Starting point of our program
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed.
 * then print the last digit of the number
 * stored in the variable n
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int n_last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_last = n % 10;
	if (n_last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n_last);

	else if (n_last == 0)
		printf("Last digit of %d is %d and is 0\n", n, n_last);

	else if (n_last < 6 && n_last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\in", n, n_last);

	return (0);
}
