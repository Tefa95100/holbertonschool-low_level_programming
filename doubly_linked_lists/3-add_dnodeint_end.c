#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end
 *@head: pointer of first element
 *@n: int to add in the struct
 *Return: return the new element in list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elem = malloc(sizeof(*new_elem));
	dlistint_t *temp = NULL;

	if (new_elem == NULL)
	{
		return (NULL);
	}
	new_elem->n = n;
	new_elem->next = NULL;
	if (*head == NULL)
	{
		*head = new_elem;
		return (new_elem);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_elem;
		new_elem->prev = temp;
	}
	return (new_elem);
}
