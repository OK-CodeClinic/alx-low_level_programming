#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: value to be entered
 */
void print_rev(char *s)
{
	int n = 0;
	int i;

	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
