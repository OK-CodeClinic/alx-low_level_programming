#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: number of arguments and commands
 * @argv: array of arguments and commands
 *
 * Return: 0, otherwise 1
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
