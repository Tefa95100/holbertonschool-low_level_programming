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

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
