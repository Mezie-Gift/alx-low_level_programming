#include <stdio.h>
/**
 * main - program prints single digits starting from zero
 * followed by a new line
 * Return: return 0 (succes)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
