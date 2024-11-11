#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * allo_grid - create an array in 2d an initialize to 0
 *@width: width of array
 *@height: height of array
 *Return: NULL if width of height is 0 or failled or return array
 */
int **alloc_grid(int width, int height)
{
	int **int_array;
	int i;
	int j;

	if (width <= 0 || height <= 0)	/*Check if not 0*/
	{
		return (NULL);
	}
	int_array = malloc(height * sizeof(int *));	/*Create array*/
	for (i = 0; i < height; i++)
	{
		int_array[i] = malloc(width * sizeof(int *));
	}
	if (int_array == NULL)	/*If failled return NULL*/
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)	/*Initialize array*/
	{
		for ( j = 0; j < width; j++)
		{
			int_array[i][j] = 0;
		}
	}
	return (int_array);
}
