#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes
 * Return: Always 0 (sucess)
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/*Testing var n */
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				else
				{
					printf("%d is negative\n", n);
				}
			return (0);
}
