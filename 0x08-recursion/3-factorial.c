#include "main.h"

/**
 * factorial - print factorial of a number
 * @n: value to be read
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (1);
	}
}
