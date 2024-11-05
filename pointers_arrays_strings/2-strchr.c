#include "main.h"
#include <stddef.h>

/**
 * *_strchr - search a char in a array
 *@s: an array of char
 *@c: a char to search
 *Return: return the array to position find or return NULL if nothing
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
