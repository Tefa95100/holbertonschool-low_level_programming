#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	int a;

	a = 122;
	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
