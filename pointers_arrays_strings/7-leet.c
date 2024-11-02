#include "main.h"

/**
 * *leet - change char by number for leet
 *@str: pointer of a string
 *Return: return pointer original
 */
char *leet(char *str)
{
	int i;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	char *origin = str;

	while (*str != '\0')
	{
		for (i = 0; letters[i] != '\0'; i++)
		{
			if (letters[i] == *str)
			{
				*str = leet[i];
				break;
			}
		}
		str++;
	}
	return (origin);
}
