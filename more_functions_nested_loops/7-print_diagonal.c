#include "main.h"

/**
 *print_diagonal - print \ an 'n' times
 *@n: The numbers of time to print
 *Return: nothing
 */
void print_diagonal(int n)
{
	int count;
	int space;

	if (n > 0)
	{
		for (count = 0; count != n; count++)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
