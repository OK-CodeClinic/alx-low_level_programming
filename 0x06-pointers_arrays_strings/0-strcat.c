#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of concatenated text
 * @src: source of concatenated text
 * Return: results of concatenated text
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
