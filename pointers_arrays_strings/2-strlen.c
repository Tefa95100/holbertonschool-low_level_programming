#include "main.h"

/**
 *_strlen - count the length of a string
 *@s: counting string
 *Return: lenght of string
 */
int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; lenght++)
		s++;
	return (lenght);
}
