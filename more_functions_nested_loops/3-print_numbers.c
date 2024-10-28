#include "main.h"

/**
 *print_numbers - prints all digit with nex line
 *Return: nothing
 */
void print_numbers(void)
{
	int count;

	for (count = 0; count <= 10; count++)
		if ( count < 10)
			_putchar(count + '0');
		else
			_putchar('\n');
}
