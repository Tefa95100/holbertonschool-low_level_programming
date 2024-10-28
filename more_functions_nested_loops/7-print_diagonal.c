#include "main.h"

/**
 *print_line - print \ an 'n' times
 *@n: The numbers of time to print
 *Return: nothing
 */
void print_diagonal(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count != n; count++)
			_putchar('\\');
	}
	_putchar('\n');
}
