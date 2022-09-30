#include "main.h"

/**
 * main - prints all the argument it recieves
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
