#include "lists.h"
#include <stdio.h>

/**
 * list_len - count lenght of list
 *@h: index for browse list
 *Return: return the size of list
 */
size_t list_len(const list_t *h)
{
	int lenght = 0;

	if (h == NULL)	/*Check if h is null*/
	{
		return (0);
	}
	while (h != NULL)	/*Browse list and count number of element*/
	{
		++lenght;
		h = h->next;
	}
	return (lenght);
}
