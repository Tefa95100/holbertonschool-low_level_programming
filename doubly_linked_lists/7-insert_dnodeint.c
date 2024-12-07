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
	dlistint_t *new_element = malloc(sizeof(dlistint_t));

	if (new_element == NULL)	/*Check if allocate is fail*/
		return (NULL);
	new_element->n = n;	/*Add n in new element*/
	if (idx == 0)	/*Add node at begin*/
	{
		new_element = add_dnodeint(h, n);
		if (new_element == NULL)
		{
			return (NULL);
		}
		return (new_element);
	}
	temp = *h;
	while (temp && index_incrementation != idx)	/*Search node by index*/
	{
		index_incrementation++;
		temp = temp->next;
	}
	/*Check if index is invalid*/
	if (index_incrementation != idx)
	{
		free(new_element);
		return (NULL);
	}
	if (temp == NULL)	/*Add node at end*/
	{
		new_element = add_dnodeint_end(h, n);
		return (new_element);
	}
	/*Attribute variable for insertion of new_element*/
	new_element->next = temp;
	new_element->prev = temp->prev;
	temp->prev = new_element;
	temp = new_element->next;
	temp->prev = new_element;
	return (new_element);
}
