#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of numbers
 * @a: array to be inputed
 * @n: number of times array runs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
