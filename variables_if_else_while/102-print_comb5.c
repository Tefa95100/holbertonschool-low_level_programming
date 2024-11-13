#include <stdio.h>

/**
 *main - Entry point of programm
 *Return: return 0
 */
/* Declaration of prototype */
void print_digit(int a, int b, int c);

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					print_digit(a, b, c);
				}
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
 *@d:
 */
void print_digit(int a, int b, int c, int d)
{
	if (a != b && a < b)
	{
		if (b != c && b < c)
		{
			if (c != d && c < d)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
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
}
