#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to array that will be reversed
 * @n: number of element to swap
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
