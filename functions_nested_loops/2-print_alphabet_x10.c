#include "main.h"

/**
 * print_alphabet_x10 - print x10 alphabet
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcddefghijklmnopqrstuvwxyz\n";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; alphabet[i] != '\0'; i++)
		{
			_putchar(alphabet[i]);
		}
	}
}
