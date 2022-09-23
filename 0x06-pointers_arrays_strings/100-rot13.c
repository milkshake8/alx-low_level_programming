#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: point to the string to encode.
 * Return: a pointer to the encoded string.
 */
char *rot13(char *str)
{
	int count = 0, count2 = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (letters[count2] != '\0')
		{
			if (str[count] == letters[count2])
			{
				str[count] = replace[count2];
				break;
			}
			count2++;
		}
		count++;
	}
	return (str);
}
