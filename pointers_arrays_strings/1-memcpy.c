#include "main.h"

/**
 * *_memcpy - copy a number of byte in an other array
 *@dest: destination of the copy
 *@src: source of the copy
 *@n: number of char
 *Return: return the array after copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
		dest[i] = src[i];
	return (dest);
}
