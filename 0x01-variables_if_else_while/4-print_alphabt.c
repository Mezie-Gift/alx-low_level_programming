#include <stdio.h>
/**
 * main - prints alphabets in lowercase execpt e and q
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e' || ch == 'q')
	{
		continue;
	}
	putchar(ch);
	}
putchar('\n');
return (0);
}
