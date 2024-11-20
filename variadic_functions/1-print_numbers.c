#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all number
 *@separator: character of separation
 *@n: number of int to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbr_print;
	unsigned int i;

	if (n == 0)
	{
		printf("Error");
		exit(100);
	}
	va_start(nbr_print, n);	/*Initialize list*/
	for (i = 0; i < n; i++)	/*Browse the list*/
	{
		printf("%d", va_arg(nbr_print, int));	/*Print the number*/
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);	/*Print separator if is not NULL*/
		}
		else if (i == n - 1)
		{
			printf("\n");	/*Print new line at the ends*/
		}
	}
	va_end(nbr_print);	/*Clean the list*/
}
