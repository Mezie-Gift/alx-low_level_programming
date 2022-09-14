#include <unistd.h>
/**
 * main - _putchar writes character c to stdout
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
