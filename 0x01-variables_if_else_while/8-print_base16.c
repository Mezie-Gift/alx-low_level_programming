#include <stdio.h>
/**
 * main - program prints all numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			i = 'a';
			for (; i <= 'f'; i++)
			{
				putchar(i);
			}
			break;
		}
	}
	putchar('\n');
		return (0);
}
