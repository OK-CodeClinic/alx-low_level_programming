#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');

		for (j = 1; j < 10; j++)
		{
			product = i * j;

			if (product == 81)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
				break;
			}
			if (product > 9)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
				if (j != 9)
					_putchar(',');
			}

			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
				if (j != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
