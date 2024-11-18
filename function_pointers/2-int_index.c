#include "function_pointers.h"

/**
 * int_index - search index equal of return of function
 *@array: array to search
 *@size: number of element
 *@cmp: function to compare
 *Return: return the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
