#include "main.h"
/**
 * _ialpha - checks for alphabetic character
 * @c: is the tested letter
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
