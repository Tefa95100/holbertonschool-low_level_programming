#include "main.h"

/**
 *print_most_numbers - print all numbers except 2 and 4
 *Return: nothing
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count <= 10; count++)
	{
		if (count != 2 && count != 4 && count < 10)
			_putchar(count + '0');
		else if (count == 10)
			_putchar('\n');
	}
}
