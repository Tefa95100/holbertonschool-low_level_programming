#include "lists.h"

/**
 * add_dnodeint - add a node in double list chain
 *@head: pointer on the first element
 *@n: integer for the structure
 *Return: return a list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_elem;

	new_elem = malloc(sizeof(new_elem));
	if (new_elem == NULL)
	{
		return (NULL);
	}
	new_elem->n = n;
	new_elem->next = *head;
	new_elem->prev = NULL;
	*head = new_elem;
	return (new_elem);
}
