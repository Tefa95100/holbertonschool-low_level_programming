#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create an array in 2d an initialize to 0
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
	if (int_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)	/*loops for malloc all line*/
	{
		int_array[i] = malloc(width * sizeof(int));
		if (int_array[i] == NULL)	/*check if malloc success of fail*/
		{
			while (i >= 0)	/*free all line if one fail*/
			{
				free(int_array[i]);
				i--;
			}
			free(int_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)	/*Initialize array*/
	{
		for (j = 0; j < width; j++)
		{
			int_array[i][j] = 0;
		}
	}
	return (int_array);
}
