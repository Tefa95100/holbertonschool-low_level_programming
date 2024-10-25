#include "main.h"

/**
 * print_alphabet - print alphabet
 * Return: return 0
 */
void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	
	for(i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
	return (0);
}
