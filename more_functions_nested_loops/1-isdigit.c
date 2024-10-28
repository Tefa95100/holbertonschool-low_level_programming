#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: a character ASCII
 * Return: return 1 if succes else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
