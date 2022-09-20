#include "main.h"
/**
 *print_array - prints the number of element in an array
 *@a: a pointer to an int
 *@n: value to be returned
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
	i++;
	}
	printf("\n");
}
