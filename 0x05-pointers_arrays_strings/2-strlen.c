#include "main.h"
#include <string.h>

/**
 * _strlen - returns the lenth of a string
 * @s: the string in question
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
