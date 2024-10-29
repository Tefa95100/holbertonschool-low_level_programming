#include "main.h"

/**
 *swap_int - swap two int
 *@a: first int
 *@b: second int
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
