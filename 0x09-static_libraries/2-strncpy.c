#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination to copy string
 * @src: source of string to be copied
 * @n: number of characters to be copied
 *
 * Return: result of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
