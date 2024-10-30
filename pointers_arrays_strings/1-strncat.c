#include "main.h"

/**
 * *_strncat - concatenate 2 chain of string
 *@dest: first string and pointer for variable
 *@src:  second string for add
 *@n: number of bytes to add
 *Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count;

	i = 0;
	while ( dest[i] != '\0')
		i++;
	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[i] = src[count];
		i++;
	}
	return (dest);
}
