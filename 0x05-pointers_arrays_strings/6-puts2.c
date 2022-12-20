#include "main.h"

/**
 * puts2 - prints multiple of two in a string
 * @str: value to be inputed
 */
void puts2(char *str)
{
	int i;
	int n = 0;

	while (str[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
