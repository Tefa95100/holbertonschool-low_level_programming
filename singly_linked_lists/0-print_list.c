#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list of string
 *@h: index for browse list
 *Return: return the size of list
 */
size_t print_list(const list_t *h)
{
	int lenght;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		++lenght;
		h = h->next;
	}
	return (lenght);
}
