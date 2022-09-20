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
	char s2[size];

	for (i = 0; i < size; i++)
		s2[i] = s[(size - 1) - i];
	s = s2;
}
