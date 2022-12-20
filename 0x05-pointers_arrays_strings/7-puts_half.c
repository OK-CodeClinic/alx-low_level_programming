#include "main.h"

/**
 * puts_half - print half of a string
 * @str: value to be inputed
 */
void puts_half(char *str)
{
	int n = 0;
	int i, j;

	while (str[n] != '\0')
		n++;
	if (n % 2 != 0)
		j = ((n - 1) / 2) + 1;
	else
		j = n / 2;
	for (i = j; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
