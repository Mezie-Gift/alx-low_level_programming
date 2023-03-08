#include "main.h"

/**
 * print_number - This function prints numbers
 * @n: the numbers in question
 *
 * Return: void
 */

void print_number(int n)
{
	int i;

	for (i = (-1000); i <= n; i++)
	{
		if (i == n)
		{
			if (i < 0)
			{
				if (i > (-99) && i <= (-10))
				{
					_putchar('-');
					_putchar(i / -10 + '0');
					_putchar(i % -10 * (-1) + '0');
				}
			}
			else if (i > 9 && i <= 99)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i > 99 && i <= 999)
			{
				_putchar(i / 100 + '0');
				_putchar(i / 10 % 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i > 999 && i <= 1999)
			{
				_putchar(i / 1000 + '0');
				_putchar(i / 100 % 10 + '0');
				_putchar(i % 100 / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
	}
