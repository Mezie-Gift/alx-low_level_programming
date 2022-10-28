#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string 0 and 1 chars
*
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* return 0 if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int k = 1;
	unsigned int i = 0;
	unsigned int len ;

	len = strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != 48 && b[c] != 49)
			return (0);
		if (b[c] == 49)
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
