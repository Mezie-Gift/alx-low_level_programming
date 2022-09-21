#include "main.h"

/**
 * string_toupper - changes all lowercas letters of a string to uppercase
 * @str: parameter
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while(str[i++])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
