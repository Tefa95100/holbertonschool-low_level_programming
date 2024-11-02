#include "main.h"

/**
 * *cap_string - transform character afeter a separator in Upper
 *@str: string chain for transform
 *Return: the string chain modify
 */
char *cap_string(char *str)
{
	int i;
	int isep;
	char separator[] = " ,;.!?\"(){}\t\n";	/*Word separator for check*/

	if (str[0] >= 97 && str[0] <= 122)	/*Check if the first is lower*/
		str[0] = str[0] - 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		for (isep = 0; separator[isep] != '\0'; isep++)
		{
			if (separator[isep] == str[i - 1])	/*Check if previous char is a separator*/
			{
				if (str[i] >= 97 && str[i] <= 122)	/*check if a lowercase*/
					str[i] = str[i] - 32;
				break;
			}
		}
	}
	return (str);
}
