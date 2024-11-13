#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * malloc_checked - give the space to a pointer with malloc
 *@b: size of malloc
 *Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
