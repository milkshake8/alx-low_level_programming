#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i;
	int size = strlen(s);
	char _s[size];

	for (i = 0; i < size; i++)
		_s[i] = s[(size - 1) - i];
	s = _s;
}
