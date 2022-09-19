#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: one of the integer to be swapped
 * @b: the other integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
