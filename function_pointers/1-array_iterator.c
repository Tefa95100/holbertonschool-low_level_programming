#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - browse an array with a function
 *@array: array to browse
 *@size: number of elements in the array
 *@action: function use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
