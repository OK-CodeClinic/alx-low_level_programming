#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of commands passed to the code
 * @argv: array of command passed to tbe code
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
