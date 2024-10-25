#include "main.h"

/**
 *_islower - Says if it's a lowercase or uppercase
 *@c: receive a letter
 *Return: 1 if the letter is lowercase else 0 if other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
