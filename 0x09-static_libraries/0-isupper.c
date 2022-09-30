#include "main.h"

/**
 * _isupper - check if a character is in uppercase
 * @c: The tested character.
 *
 * Return: 1 (uppercase character) or 0 (other character)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
