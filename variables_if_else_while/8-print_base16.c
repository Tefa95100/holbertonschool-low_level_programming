#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 succes
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 70)
	{
		if (i <= 57)
			putchar(i);
		else if (i <= 102 && i >= 97)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
