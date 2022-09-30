#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: point to the string
 * @accept: point to the accepted chars
 * Description: get the length of a prefix substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0, k;

	while ((*s >= 65 && *s <= 90) || (*s >= 97 && *s <= 122))
	{
		k = 0;

		while (accept[k] != '\0')
		{
			if (*s == accept[k])
				sum += 1;
			k++;
		}
		s++;
	}
	return (sum);
}
