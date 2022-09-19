#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to the string that is to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}
	for (length--; length >= 0; length--)
		_putchar(s[length]);
	_putchar('\n');
}
