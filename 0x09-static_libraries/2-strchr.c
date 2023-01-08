#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: in the string
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
