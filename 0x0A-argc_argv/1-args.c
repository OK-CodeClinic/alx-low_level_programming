#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of commands and arguments
 * @argv: array of commands and arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
