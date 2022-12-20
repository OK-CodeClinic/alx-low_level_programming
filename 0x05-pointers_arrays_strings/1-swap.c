#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: value to be computed
 * @b: value to be computed
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
