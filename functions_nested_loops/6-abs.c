#include "main.h"

/**
 *_abs - return the absolue of the int n
 *@n: an int negative or positive
 *Return: return the absolue of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
