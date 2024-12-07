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
	dlistint_t *temp = NULL;
	dlistint_t *new_element = malloc(sizeof(*new_element));

	/*Check if allocate is fail*/
	if (new_element == NULL)
	{
		return (NULL);
	}
	/*Check if h is NULL*/
	if (*h == NULL)
	{
		/*if the new node is the first element h point newt_element*/
		if (idx == 0)
		{
			new_element->n = n;
			new_element->next = NULL;
			new_element->prev = NULL;
			*h = new_element;
			return (new_element);
		}
		free(new_element);
		return (NULL);
	}
	temp = *h;
	/*Browse the list and search node by index*/
	while (temp && index_incrementation != idx)
	{
		index_incrementation++;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(new_element);
		return (NULL);
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
