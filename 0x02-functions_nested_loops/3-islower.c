#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
 *_islower - checks for lowercase character
 * @c: the tested parameter
 *
 * Description: a function that checks for lowercase character
 * Return: 1 (success) or 0 otherwise
 */
int _islower(int c)
{
	int ret;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
