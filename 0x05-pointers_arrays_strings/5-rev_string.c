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
	int k = 0;

	for (i =0; i < size; i++)
	{
		s[i] = s[(size - 1) - k];
		k++;
	}
}
