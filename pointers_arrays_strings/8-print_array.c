#include "main.h"
#include <stdio.h>

/**
 *print_array - print a array of int 
 *@a: a array of int
 *@n: number of int you need print
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count < n - 1)
			printf("%d, ", a[count]);
		else if (n == 0 || n < 0)
			printf("\n");
		else
			printf("%d\n", a[count]);
	}
}
