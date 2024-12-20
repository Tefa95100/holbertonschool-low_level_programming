#include "main.h"

/**
 * divided - Search with by divided if is prime number
 *@n: number for search
 *@div: divisor
 *Return: return 1 if is prime number or 0 is not
 */
int divided(int n, int div)
{
	if (n % div == 0)	/*if is divided by a number less is not prime*/
	{
		return (0);
	}
	else if (div * div > n) /*if multiple of divided > n is prime number*/
	{
		return (1);
	}
	return (divided(n, div + 1));	/*Increment divided*/
}

/**
 * is_prime_number - Search if is a prime number
 *@n: number for search
 * Return: return 1 if is prime number or 0 is not
 */
int is_prime_number(int n)
{
	if (n != 2 && n % 2 == 0)	/*Check if is not a even and not 2*/
	{
		return (0);
	}
	else if (n < 2)	/*All number less of 2 is not prime*/
	{
		return (0);
	}
	return (divided(n, 3));	/*Call function divided*/
}
