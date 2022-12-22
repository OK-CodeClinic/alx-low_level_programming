#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of concatenated text
 * @src: source of concatenated text
 * Return: results of concatenated text
 */
char *strcat(char *dest, const char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
