#include "main.h"

/**
 * *_strcat - concatenates 2 strings
 *@dest: the string chain to concatenates
 *@src: the string chain to add
 *Return:
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count;

	i = 0;
	while (dest[i] != '\0')
		i++;
	count = 0;
	while (src[count] != '\0')
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
