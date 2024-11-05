#include "main.h"
#include <stddef.h>

/**
 * *_strstr - search a substring in the first string
 *@haystack: String where search
 *@needle: string for search
 *Return: return ptr in start of identical
 */
char *_strstr(char *haystack, char *needle)
{
	int lenght = 0;
	int previous_count = 0;
	int i = 0;
	int j = 0;
	char *substring;

	while (needle[lenght] != '\0')	/*Search the lenght of needle*/
		lenght++;
	while (haystack[i] != '\0')	/*Browse the string haystack*/
	{
		while (needle[j] != '\0')	/*Browse the string needle*/
		{
			if (haystack[i] == needle[j])	/*Search identical char for increment count*/
			{
				j++;
				break;
			}
			else
				break;
		}
		if (lenght == j)
		{
			substring = &haystack[i - lenght + 1];
			return (substring);
		}
		if (j == previous_count)
			j = 0;
		else
			previous_count = j;
		i++;
	}
	return (NULL);
}
