#include "search_algos.h"

/**
  * linear_search - searches for a value in an array of integers using
  * the Linear search algorithm.
  * @array: pointer to the array of integers
  * @size: number of items in the arrays.
  * @value: the value to search for.
  *
  * Return: returns the first index where value is located
  */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
