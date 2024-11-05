#include "main.h"

/**
 * *_memset - replace a number(n) of char in a array(s) by a unique char(b)
 *@s: the array
 *@b: the char choose
 *@n: number of char to change
 *Return: return the pointer of array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
		s[i] = b;
	return (s);
}
