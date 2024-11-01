#include "main.h"

/**
 * *_strncpy - copy a string chain in function of n 
 *@dest: destination of copy
 *@src: source of copy
 *@n: numbers of bytes to copy
 *Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int i_max;

	i_max = 0;
	while (dest[i_max] != '\0')
		i_max++;

	for (i = 0; i < n && n < i_max; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
