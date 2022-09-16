#include "main.h"

/**
 * _isdigit - check if a character is a digit or no.
 * @c: The tested character.
 *
 * Return: 1 (digit character) or 0 (other character)
 */

int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
