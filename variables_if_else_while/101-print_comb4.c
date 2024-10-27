#include <stdio.h>

/**
 *main - Entry point of programm
 *Return: return 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				print_digit(a, b, c);
			}
		}
	}
	return (0);
}

/**
 *print_digit - print digit if is different and not print in the same sequence
 *@a: hundred digit
 *@b: tens digit
 *@c: unit digit
 */
void print_digit(int a, int b, int c)
{
	if (a != b && a < b)
	{
		if (b != c && b < c)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar (c + '0');
			if (a != 7 || b != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
}
