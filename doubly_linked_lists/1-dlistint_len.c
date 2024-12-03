#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - count the number of element on the list
 *@h: pointer to the first element
 *Return: return the size
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
