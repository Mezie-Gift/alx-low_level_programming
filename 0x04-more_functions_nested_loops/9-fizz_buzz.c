#include <stdio.h>
#include <stdlib.h>

/**
* main - prints numbers from 1 to 100
* for the multiples of 3, it prints Fizz
* for the multiples of 5, it prints Buzz
* for the multiples of both 3 and 5, prints fizzBuzz
*
* Return: void
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}else if (i == 1)
		{
			printf("%d", i);
		}else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
