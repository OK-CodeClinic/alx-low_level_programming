#include "main.h"

/**
 * _isalpha - print 1 if c is a letter otherwise 0
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is a letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
