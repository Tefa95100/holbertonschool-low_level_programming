#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * *create_array - create an array with malloc before initializes
 *@size: The size of array
 *@c: The char for initialize array
 *Return: NULL if size is 0 or return the array
 */
char *create_array(unsigned int size, char c)
{
	char *array_char;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array_char = malloc(size * sizeof(char)); /*create array with malloc*/
	while (i < size)
	{
		array_char[i] = c;	/*Initialize array with the char*/
		i++;
	}
	return (array_char);
}
