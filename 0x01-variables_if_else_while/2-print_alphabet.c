#include <stdio.h>
/*
 * main - prints alphabets in lowercase,
 * begins with a new line
 *
 * Return: Always 0 (Success)
 *
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
