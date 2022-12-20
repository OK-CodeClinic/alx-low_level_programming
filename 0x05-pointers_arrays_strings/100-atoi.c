#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to an integer
 * @s: character to be converted
 * Return: converted characters
 */
int _atoi(char *s)
{
	int i, neg = 1, j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == 45)
			neg *= -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			n = (n * 10) + (s[i] - '0');
			j = 1;
			i++;
		}
		if (j == 1)
			break;
	}
	n *= neg;
	return (n);
}
