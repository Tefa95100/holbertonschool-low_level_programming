#include "main.h"

/**
 *print_line - print _ an 'n' times
 *@n: The numbers of time to print
 *Return: nothing
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count != n; count++)
			_putchar('_');
	}
	_putchar('\n');
}
