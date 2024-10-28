#include "main.h"

/**
 * _isupper - check if c is Uppercase
 * @c: a character ASCII
 * Return: return 1 if succes else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
