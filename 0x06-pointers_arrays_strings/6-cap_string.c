#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @str: string parameter
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[++i])
	{
		while (!(str[i] >= 97 && str[i] <= 122))
			i++;
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
			str[i] -= 32;
	}
	return (str);
}
