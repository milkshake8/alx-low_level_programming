#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: point to the string to encode.
 *
 * Return: value of encoded string
 */
char *leet(char *str)
{
	char *letters, *replace;
	int count, count2;

	letters = "aAeEoOtTlL";
	replace = "4433007711";

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (letters[count2] != '\0')
		{
			if (str[count] == letters[count2])
			{
				str[count] = replace[count2];
			}
			count2++;
		}
		count++;
	}
	return (str);
}
