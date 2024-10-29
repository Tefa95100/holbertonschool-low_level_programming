#include "main.h"

/**
 *print_rev - print in reverse a string chain
 *@s: string chain
 *Return: nothing
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while ( s[count] != '\0')
		count++;
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
