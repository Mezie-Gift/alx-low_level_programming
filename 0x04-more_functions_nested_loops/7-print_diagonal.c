#include "main.h"

/**
 * print_diagonal - prints a diagonal line based on integer n
 * @n: the number of lines using '\' characters
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (n <= 0)
			{
				_putchar(10);
			}
			if (j == i)
			{
				_putchar('\\');
			}
			else if (j < i)
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
