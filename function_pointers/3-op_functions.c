#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add 2 int
 *@a: first number
 *@b: second number
 *Return: return sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract 2 int
 *@a: first number
 *@b: second number
 *Return: return difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply 2 int
 *@a: first number
 *@b: second number
 *Return: return the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide 2 int
 *@a: first number
 *@b: second number
 *Return: return the quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		/*Check if int b is not equal to 0 in division*/
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - give modulo of 2 int
 *@a: first number
 *@b: second number
 *Return: return modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		/*Check if int b is not equal to 0 in modulo*/
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
