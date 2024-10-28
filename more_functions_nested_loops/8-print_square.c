#include "main.h"

/**
 * print_square - print a square with '#'
 * @size: size of square
 * Return: nothing
 */
void print_square(int size)
{
	int column;
	int line;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
