#include "main.h"

/**
 * rev_strings - reverses a string
 * @s: pointer to the string in question
 * Return: 0
 */

void rev_strings(char *s)
{
	int length = 0, i, j;
	char *str, k;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}
	str = s;

	for (i = 0; i < (length - 1); i++)
	{
		for (j =i + 1; j > 0; j--)
		{
			k = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = k;
		}
	}
}
