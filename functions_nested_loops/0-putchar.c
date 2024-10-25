#include "main.h"

/**
 *main - Entry point of programm
 *Return: return 0
 */

int main(void)
{
	char text[10] = "_putchar\n";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
