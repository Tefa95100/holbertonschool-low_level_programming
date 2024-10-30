#include "main.h"

/**
 *puts_half - print half of character
 *@str: string chain
 *Return: nothing
 */
void puts_half(char *str)
{
	int count;
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (count = (len - 1) / 2; count <= len; count++)
		_putchar(str[count]);
	_putchar('\n');
}
