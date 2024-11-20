#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print all string
 *@separator: character of separation
 *@n: number of element
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*Declare list*/
	va_list str_prt;
	unsigned int i;
	char *str;

	/*Initialize list*/
	va_start(str_prt, n);
	/*Browse the list*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(str_prt, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		/*Print element of list*/
		printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);	/*Print separator if is not NULL*/
		}
	}
	printf("\n");	/*Print new line at the ends*/
	/*Clean list*/
	va_end(str_prt);
}
