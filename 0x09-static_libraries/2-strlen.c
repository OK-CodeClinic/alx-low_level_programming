#include "main.h"

/**
 * _strlen - print length of string
 * @s: value to be inputed
 * Return: lentght of string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
