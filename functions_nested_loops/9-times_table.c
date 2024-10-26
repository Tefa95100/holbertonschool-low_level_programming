#include "main.h"

/**
 *times_table - display multiplication table
 */
void times_table(void)
{
	int a;
	int b;
	int prod;
	int affichage;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;
			if (prod > 9)
			{
				affichage = prod / 10;
				_putchar(affichage + '0');
			}
			
			affichage = prod % 10;
			_putchar(affichage + '0');
			if (b < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
