#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i, k;
	int size = strlen(s);

	for (i = 0; i < size / 2; i++)
	{
		k = s[i];
		s[i] = s[(size - 1) - i];
		s[(size - 1) - i] = k;
	}

}
