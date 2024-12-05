#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print a list double chain
 *@h: pointer of first element
 *Return: return the number of element
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned long int lenght;

	while (h)
	{
		printf("%d\n", h->n);
		lenght++;
		h = h->next;
	}
	return (lenght);
}
