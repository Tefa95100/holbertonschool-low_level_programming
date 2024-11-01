#include "main.h"

/**
 * _atoi - extract an in of a string
 *@s: string chain
 *Return: return an int extract of string
 */
int _atoi(char *s)
{
	int i;
	int neg;
	unsigned int number;

	neg = 0;
	number = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			neg++;	/*Recover number of negativ sign*/
		if (s[i] >= '0' && s[i] <= '9')	/*Search number*/
			number = (number * 10) + (s[i] - '0');	/*multiply number by 10 and add new digit*/
		else if (number > 0)	/*Check if number is always to 0 if s[i] is a char*/
			break;
	}
	if (neg % 2 == 1)
	{
		number = number * -1;	/*Transfomr number in neg if the variable is odd*/
		return (number);
	}
	else
		return (number);
}
