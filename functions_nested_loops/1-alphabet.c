#include "main.h"

/**
 * print_alphabet - print alphabet
 * Return: return 0
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
}
