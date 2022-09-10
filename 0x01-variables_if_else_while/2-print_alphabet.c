#include <stdio.h>

/**
 * main - print alphabets in lowercase and
 * begins with a new line
 *
 * Return: Always 0 (sucess)
 */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
