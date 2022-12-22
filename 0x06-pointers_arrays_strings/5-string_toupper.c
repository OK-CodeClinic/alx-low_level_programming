#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 *
 * Return:char
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
