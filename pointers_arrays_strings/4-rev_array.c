#include "main.h"

/**
 *reverse_array - reverse array of int
 *@a: array of int
 *@n: number of element in arrays
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
