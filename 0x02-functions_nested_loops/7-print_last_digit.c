#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The integer to be computed.
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = -(n % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
