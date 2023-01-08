#include "main.h"
#include "string.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: segment to be returned
 * @accept: value to be computed
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
