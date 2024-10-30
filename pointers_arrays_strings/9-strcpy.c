#include "main.h"

/**
 * *_strcpy - copy a pointer
 *@dest: pointer of for receive copy
 *@src: pointer to copy
 *Return: return the copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
