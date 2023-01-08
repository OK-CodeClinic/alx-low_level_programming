#include "main.h"
#include "string.h"

/**
 * _strstr - locates a substring.
 * @haystack: segment to be returned
 * @needle: value to be computed
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
