#include "lists.h"
#include <stdio.h>

/**
 * list_len - count lenght of list
 *@h: index for browse list
 *Return: return the size of list
 */
size_t list_len(const list_t *h)
{
	int lenght;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}
	return (lenght);
}
