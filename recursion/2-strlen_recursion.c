#include "main.h"

/**
 * _strlen_recursion - count the lenght of string by recursion
 *@s: string for count
 *Return: return a count increment and use the function
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')	/*Check if the ends of string*/
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));	/*count + recursions(s + 1 in array*/
}
