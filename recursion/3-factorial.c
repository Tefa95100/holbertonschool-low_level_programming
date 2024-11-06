#include "main.h"

/**
 * factorial - Give the factorial
 *@n: number of factorisaton
 *Return: result of factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
