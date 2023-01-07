#include "main.h"

/**
 * _pow_recursion - print power of a number
 * @x: number to be calculated
 * @y: power of x
 *
 * Return: power of number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
