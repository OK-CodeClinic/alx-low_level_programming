#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copied memory
 * @src: source of memory to be copied
 * @n: amount of memory area to be copied
 *
 * Return: results of copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
