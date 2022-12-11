#include <stdio.h>
/**
 * main - Printing alphabets in lowercase and in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter <= 'a')
	{
		putchar(letter);
		letter--;
	}
		putchar('\n');
	return (0);
}
