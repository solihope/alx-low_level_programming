#include "3-calc.h"

/**
 * op_add - calculate the sum of two int
 * @a: first int
 * @b: sec int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the sub of two ints
 * @a: first int
 * @b: sec int
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the product of two int
 * @a: first int
 * @b: sec int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * n);
}
/**
 * op_div - calculates the devision of two ints
 * @a: first int
 * @b: sec int
 * Return: result of division of a and b
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
 * op_mod - calculates the remainder of two int
 * @a: first int
 * @b: sec int
 * Return: remainder of a divided b
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
