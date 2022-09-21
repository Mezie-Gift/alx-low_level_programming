#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: str
 */

char *leet(char *s)
{
	int i, c = 0;
	int lc[] = {97, 101, 111, 116, 108};
	int uc[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == lc[i] || s[c] == uc[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
