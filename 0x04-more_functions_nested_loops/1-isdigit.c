#include "main.h"

/**
 * _isdigit - checks for digit through 0 to 9
 * @c: variable to be tested
 * Return: 1 0r 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
