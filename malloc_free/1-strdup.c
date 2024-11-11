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

	if (str[0] == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	cpy_str = malloc(i);
	while (i >= 0)
	{
		cpy_str[i] = str[i];
		i--;
	}
	return (cpy_str);
}
