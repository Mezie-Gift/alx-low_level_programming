#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all single digit of base 10 followed by a new line
 *
 *Return: Always 0 (success)
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
