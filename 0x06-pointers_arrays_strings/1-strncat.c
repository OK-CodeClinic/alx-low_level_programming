#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of concatenated string
 * @src: source of text to be concatenated
 * @n: number of text to be concatenated
 *
 * Return: result of concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
