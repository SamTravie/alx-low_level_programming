#include "3-calc.h"

/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns subtraction of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns multiplication of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: multiplication of a and b.
 */
	int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
