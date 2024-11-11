#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - concatane 2 strings
 *@s1: first string
 *@s2: second string
 *Return: NULL if concatane failled or return string concatane
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;
	char *conca;

	if (s1 == NULL)	/*Check if s1 or s2 is NULL an treat in string empty*/
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])	/*Search lenght of s1 and s2*/
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	conca = malloc(i + j + 1);	/*create an array with malloc*/
	if (conca == NULL)	/* if failled return NULL*/
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)	/*Concatane the 2 strings*/
	{
		conca[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		conca[k + i] = s2[k];
	}
	conca[i + j] = '\0';	/*add the caractere NULL*/
	return (conca);	/*Return the string concatane*/
}
