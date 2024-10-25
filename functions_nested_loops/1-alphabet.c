#include "main.h"

/**
 * main - Entry point of programm
 * Return: return 0
 */
int main (void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

		for(i = 0; alphabet[i] != '\0'; i++)
		{
			print_alphabet(_putchar(alphabet[i]));
		}
	return (0);
}
