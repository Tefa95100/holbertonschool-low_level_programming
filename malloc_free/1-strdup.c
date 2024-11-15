#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - duplicate an array
 *@str: string to duplicate
 *Return: NULL if array is empty or ptr duplicate
 */
char *_strdup(char *str)
{
	char *cpy_str;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	cpy_str = malloc(i + 1);
	if (cpy_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		cpy_str[j] = str[j];
	}
	return (cpy_str);
}
