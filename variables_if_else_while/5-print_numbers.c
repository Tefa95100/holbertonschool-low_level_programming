#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
