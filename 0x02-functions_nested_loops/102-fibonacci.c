#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers starting with 1 or 2
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long sum, fib1 = 0, fib2 = 1;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
