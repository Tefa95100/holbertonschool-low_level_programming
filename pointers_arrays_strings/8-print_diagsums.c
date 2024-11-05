#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - add the numbers in diagonals
 *@a: a pointer of an array
 *@size: the size of array
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	/*int j = 0;*/
	int sum1 = 0;
	int sum2 = 0;

	while (i < size * size)
	{
		sum1 = sum1 + *(a + i);
		i += size + 1;
	}
	i -= size * 2;
	while (i > 0)
	{
		sum2 = sum2 + *(a + i);
		i -= size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
