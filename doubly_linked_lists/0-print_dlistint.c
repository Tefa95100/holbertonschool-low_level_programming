#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print a list double chain
 *@h: pointer of first element
 *Return: return the number of element
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned long int lenght = 0;

	/*browse all node*/
	while (h)
	{
		printf("%d\n", h->n);	/*print integer*/
		lenght++;	/* increment lenght */
		h = h->next;	/*go to the next node*/
	}
	return (lenght);
}
