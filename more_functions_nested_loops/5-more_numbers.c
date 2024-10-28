#include "main.h"

/**
 *more_numbers - print all number to 0 to 14
 *Return: nothing
 */
void more_numbers(void)
{
	int count;
	int count_loop;
	int digit;
	int tens;

	for (count_loop = 0; count_loop < 10; count_loop++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count < 10)
				digit = count;
			else
			{
				tens = count / 10;
				digit = count % 10;
			}
			if (count >= 10)
				_putchar(tens + '0');
			_putchar(digit + '0');
			if (count == 14)
				_putchar('\n');
		}
	}
}
