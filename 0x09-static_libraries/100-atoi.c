#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert
 *
 * Return: the integer we got
 */
int _atoi(char *s)
{
	int i, sign, numb;

	i = 0;
	sign = 1;
	numb = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				numb = (s[i] - '0') * sign + numb * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (numb);
}
