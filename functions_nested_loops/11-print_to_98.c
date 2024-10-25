#include "main.h"

/**
 *
 *
 *
 */
void print_to_98(int n)
{
	if (n < 98)
		for (; n <= 98; n++)
		{
			if (n < 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(n + '0');
		}
	else if ( n > 98)
		for (; n >= 98; n--)
		{
			if (n > 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(n + '0');
		}
	else if (n == 98)
		_putchar(n + '0');
}
