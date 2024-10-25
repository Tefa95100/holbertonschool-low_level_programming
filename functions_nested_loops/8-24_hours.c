#include "main.h"

/**
 *jack_bauer - print all number of 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b == 4)
						break;
					else
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
