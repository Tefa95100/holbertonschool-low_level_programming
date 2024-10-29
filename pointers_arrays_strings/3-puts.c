#include "main.h"

/**
 *_puts - print a string
 *@str: string of character
 *Return: nothing
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	_putchar('\n');
}
