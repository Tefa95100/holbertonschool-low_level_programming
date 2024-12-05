#include "lists.h"

/**
 * insert_dnodeint_at_index -insert a new node at the index
 *@h: first element
 *@idx: the position for the insertion
 *@n: the integer for new node
 *Return: return new node if success else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index_incrementation = 0;
	dlistint_t *temp;
	dlistint_t *new_element = malloc(sizeof(*new_element));

	if (new_element == NULL)
	{
		return (NULL);
	}
	if (*h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	while (temp->next != NULL && index_incrementation != idx)
	{
		index_incrementation++;
		temp = temp->next;
	}
	/*Attribute and change variable for insertion of new_element*/
	new_element->n = n;
	new_element->next = temp;
	new_element->prev = temp->prev;
	temp->prev = new_element;
	temp = new_element->prev;
	temp->next = new_element;

	return (new_element);
}
