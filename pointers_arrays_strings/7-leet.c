#include "main.h"

/**
 *
 *
 *
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
