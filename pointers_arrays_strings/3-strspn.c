#include "main.h"

/**
 * _strspn - count how many letter in the second string
 * match a character that is not there
 *@s: string to search in
 *@accept: letters to search
 *Return: return the numbers of letter find before noth there
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
		s++;
	}
	return (count);
}
