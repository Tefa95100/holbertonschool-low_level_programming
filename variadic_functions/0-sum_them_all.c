#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all int receive
 *@n: numbers of element
 *Return: the sums
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nbr_add;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(nbr_add, n);	/*Initialize argument list*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nbr_add, int);	/*add all int in sum*/
	}
	va_end(nbr_add);	/*clean list*/
	return (sum);
}
