#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * string_nconcat - concatane 2 string in function of n
 *@s1: first string
 *@s2: second string
 *@n: number of char to concatane of s2
 *Return: return a pointer with 2 string concatane
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	char *str;

	if (s1 == NULL)	/*check if string is NULL if this attribute char empty*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')	/*count lenght of string*/
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)	/*allocate memory in function of lenght of s2*/
		str = malloc(i + j + 1);
	else
		str = malloc(i + n + 1);
	if (str == NULL)	/* if failled return null*/
		return (NULL);
	for (k = 0; k < i; k++)	/*Concatane the 2 string*/
		str[k] = s1[k];
	if (n >= j)
	{
		for (k = 0; k < j; k++)
			str[i + k] = s2[k];
	}
	else
	{
		for (k = 0; k < n; k++)
			str[i + k] = s2[k];
	}
	str[i + k] = '\0';	/*add the last char '\0*/
	return (str);	/*Return the pointer*/
}
