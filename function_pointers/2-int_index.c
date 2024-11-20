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

	if (size <= 0)	/*check size for 0 or less*/
	{
		return (-1);
	}
	for (i = 0; i < size; i++)	/*Loop for browse the array*/
	{
		if (cmp(array[i]) != 0)	/*Cmp the number in array with the res of func*/
		{
			return (i);	/*When identique return position in arrays*/
		}
	}
	return (-1);	/*Return -1 if nothing is find*/
}
