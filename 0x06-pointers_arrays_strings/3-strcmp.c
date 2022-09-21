#include "main.h"

/**
 * -strcmp - compares two strings
 *  @s1: string to compare
 *  @s2: string to be compared
 *  Return: 0 if s1 and s2 is equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			j = s1[i] - s2[i];
		}
		i++;
	}
	return (j);
}
