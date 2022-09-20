#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: a pointer to char
 * @src - a pointer to char that will be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
