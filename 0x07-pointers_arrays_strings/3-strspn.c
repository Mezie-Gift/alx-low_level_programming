#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: accepted string
 *
 * Return: Returns the number of bytes in the initial segement
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
