#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array of integers
  * using the Binary search algorithm
  * @array: pointer to the array of integers
  * @size: number of items in the arrays.
  * @value: the value to search for.
  *
  * Return: returns the first index where value is located
  */

int binary_search(int *array, size_t size, int value)
{
	int l_side = 0;
	int r_side = size -1;
	int mid;
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	while (l_side <= r_side)
	{
		mid = l_side + (r_side - l_side) / 2;

		printf("Searching in array: ");
		for (i = l_side; i <= r_side; i++)
		{
			printf("%d", array[i]);
			if (i < r_side)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			l_side = mid + 1;
		}
		else
		{
			r_side = mid - 1;
		}
	}
	return (-1);
}
