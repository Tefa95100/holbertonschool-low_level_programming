#include "main.h"
#include <stdio.h>

/**
 *print_array - 
 *
 *
 *
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count <= n; count++)
	{
		if (count < n)
			printf("%d, ", a[count]);
		else
			printf("%d\n", a[count]);
	}
}
