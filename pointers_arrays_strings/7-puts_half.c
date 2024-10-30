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
	int first_half;

	len = 0;
	while (str[len] != '\0')
		len++;
	len = len - 1;
	first_half = (len - 1) / 2;
	for (count = len - first_half; count < len; count++)
		_putchar(str[count]);
	_putchar('\n');
}
