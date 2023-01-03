#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory to be filled
 * @b: charater to fill memory
 * @n: number of memory to be filled
 *
 * Return: array of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
