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
	unsigned int count = 0;

	while (*s)	/*Browse string*/
	{
		for (i = 0; accept[i] != '\0'; i++) /*Browse accepted char*/
		{
			if (accept[i] == *s)	/*When s and accept is same increment and break*/
			{
				count++;
				break;
			}
		}
		if (accept[i] == '\0')	/*if accept is finish break all loop*/
			break;
		s++;
	}
	return (count);
}
