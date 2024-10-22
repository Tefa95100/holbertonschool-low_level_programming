#include <stdio.h>

/**
 * main - Point of entry of programm
 * Return: return 0
 */

int main(void)
{
	int letter = 97;

	while (letter != 123)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
