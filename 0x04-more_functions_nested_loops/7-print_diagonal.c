#include "main.h"

/**
 * print_diagonal - prints a diagonal line based on integer n
 * @: the number of lines using '\' characters
 * Return: void
 */

void print_diagonal(int)
{
	int i;
	int j;

	for (i = 0; i < n; n++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
	_putchar('\\');
	_putchar('\n');
}
