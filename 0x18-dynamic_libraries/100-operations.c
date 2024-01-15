#include <stdio.h>

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the addition of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts b from a
 * @a: first integer
 * @b: second integer
 * Return: result of the subtraction of b from a
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies a by b
 * @a: first integer
 * @b: second integer
 * Return: result of the multiplication of a by b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides a by b
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - computes the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
