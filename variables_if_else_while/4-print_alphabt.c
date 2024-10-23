#include <stdio.h>

/**
 * main - Entry point of programm
 * Return: return 0
 */
int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		if (a == 101 || a == 113)
			a++;
		else
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
