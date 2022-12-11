#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 16; num++);
	{
		if (num >= 10)
		{
			putchar(letter);
			letter++;
		}
		else
		{
			putchar((num % 10) + '0');
		}
	}

	putchar('\n');
	
	return (0);
}
