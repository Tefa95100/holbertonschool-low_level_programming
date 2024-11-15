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

	if (str[0] == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	cpy_str = malloc(i + 1);
	for (j = 0; j <= i; j++)
	{
		cpy_str[j] = str[j];
	}
	return (cpy_str);
}
