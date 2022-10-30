#include "main.h"

/**
* get_endianness - checks the endianness of a number
*
* Return: 0 if big endian, or 1 if little endian
*/

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
