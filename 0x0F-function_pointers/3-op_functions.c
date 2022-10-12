#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first number
 * @b: second number
 *
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract an integer from another integer
 * @a: first number/integer
 * @b: first number/integer
 *
 * Return: value after subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer/number
 * @b: second integer/number
 *
 * Return: value after multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides an integer
 * @a: integer to be divided
 * @b: integer to divide a by
 *
 * Return: value after division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulos an integer
 * @a: integer/number to get its remainder
 * @b: integer to modulo by
 *
 * Return: value after modulo operation
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
