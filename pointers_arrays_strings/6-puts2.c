#include "main.h"

/**
 *puts2 - print all 2 char
 *@str: string chain
 *Return: nothingi
 */
void puts2(char *str)
{
	int count;
	int mod;

	for (count = 0; str[count] != '\0'; count++)
	{
		mod = count % 2;
		if (mod  == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
