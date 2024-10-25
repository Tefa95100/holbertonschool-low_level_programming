#include "main.h"

/**
 *_isalpha - search if it's a letter
 *@c: an ASCII
 *Return: return 1 if it's a letter else return 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
