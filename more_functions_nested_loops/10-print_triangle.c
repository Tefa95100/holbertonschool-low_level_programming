#include "main.h"
#include <stdio.h>

/**
 *print_triangle - print a triangle with '#'
 *@size: height of triangle
 *Return: nothing
 */
void print_triangle(int size)
{
	int space;
	int print_diez;
	int triangle_line;

	print_diez = 1;
	if (size > 0)
		for (triangle_line = 1; triangle_line <= size; triangle_line++)
		{
			for (space = 0; space < size - triangle_line; space++)
				_putchar(' ');
			for (print_diez = 0; print_diez < triangle_line; print_diez++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
