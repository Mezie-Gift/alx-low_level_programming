#include "main.h"

/**
 * _strpbrk - searches the string for any set of bytes
 * @s: the string to be searched
 * @accept: accepted string
 *
 * Return: pointer to the byte in s that matches one of the char in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}

	return ('\0');
}
