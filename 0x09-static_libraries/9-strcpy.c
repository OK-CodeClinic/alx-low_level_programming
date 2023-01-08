#include "main.h"

/**
 * _strcpy - copies string
 * @dest: where to copy string to
 * @src: what to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
