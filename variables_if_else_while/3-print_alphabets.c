#include <stdio.h>

/**
 * main - entry point of programm
 * Return: return 0
 */
int main(void)
{
	int a;

	a = 97;	/*Attribute ASCII code for a*/
	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	a = 65;	/*Attribute ASCII code for A*/
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
