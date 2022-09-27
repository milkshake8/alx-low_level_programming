#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the string in which to search.
 * @needle: the sub-chain to search in the main chain.
 * Return: substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, size = 0, word_size;

	while (needle[i] != '\0')
	{
		size++;
		i++;
	}
	while (*haystack != '\0')
	{
		word_size = 0;
		i = 0;
		while (needle[i] != '\0')
		{
			if (*(haystack + i) == needle[i])
			{
				word_size++;
			}
			else
				break;
			i++;
		}
		if (word_size == size)
			return (needle);
		haystack++;
	}
	return (0);
}
