#include "main.h"
#include "string.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: segment to be returned
 * @accept: value to be computed
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
