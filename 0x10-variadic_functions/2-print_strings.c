#include "variadic_functions.h"

/**
 * print_strings - prints string strings
 * @seperator: string to printed inbetween string
 * @n: number of string passed to function
 *
 * Return: string
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);
	for  (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
}
