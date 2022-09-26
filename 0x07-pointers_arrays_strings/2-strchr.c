#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string in question
 * @c: the character we are trying to locate
 *
 * Return: pointer to the the first occurance of character 'c' in a string
 * or a null character where character 'c' is not found
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}

