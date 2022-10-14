#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to function
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != (n - 1) && seperator != NULL)
				printf("%s", seperator);
		}
		printf("\n");
		va_end(list);
}
