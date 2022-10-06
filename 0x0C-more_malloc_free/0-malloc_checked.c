#include "main.h"

#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes
 * 
 *Return: pointer to the newly allocated memory space
 * exit with 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
