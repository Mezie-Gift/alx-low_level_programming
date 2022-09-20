#include "main.h"

/**
 * is_numerical - checks if its a digit
 * @n: Number
 * Return: 1 if a number, else 0
 */

int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - convert a string to an integer
 * @s: String
 * Return: num
 */

int _atoi(char *s)
{
	unsigned int number, i;
	int sign;

	sign = 1;
	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			number = (s[i] - 48) + number * 10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i + 1] == '-')
		{
			sign *= -1;
		}
	}
	return (number * sign);
}
