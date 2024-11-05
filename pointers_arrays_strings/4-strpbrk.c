#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - search a bytes identical
 *@s: string for search
 *@accept: letter to search in string
 *Return: return the end of string afeter find a letter
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
