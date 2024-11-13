#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * array_range - print all number from min to max
 *@min: number minimum
 *@max: number max
 *Return: return pointer of array
 */
int *array_range(int min, int max)
{
	int *min_max;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	min_max = malloc((max - min) * sizeof(int));
	if (min_max == NULL)
	{
		return (NULL);
	}
	for (; min != max; min++)
	{
		min_max[i] = min;
		i++;
	}
	return (min_max);
}
