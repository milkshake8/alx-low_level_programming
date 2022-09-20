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

	for (i =0; i < size; i++)
		str[i] = str[(size - 1) - i];
}
