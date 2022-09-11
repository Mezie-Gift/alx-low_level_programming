#include<stdio.h>

/**
 * main - Main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*sizeof evaluates thr size of a variable*/
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a char: %lu byte(s)\n", sizeof(long long int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	return (0);
}
