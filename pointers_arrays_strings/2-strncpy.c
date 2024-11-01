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
	int dest_max;
	int src_max;

	dest_max = 0;
	while (dest[dest_max] != '\0')
		dest_max++;
	src_max = 0;
	while (src[src_max] != '\0')
		src_max++;
	for (i = 0; i < n && n < dest_max; i++)
	{
		if (src[0] == '\0')
			dest[i] = '\0';
		else if (i > src_max)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
