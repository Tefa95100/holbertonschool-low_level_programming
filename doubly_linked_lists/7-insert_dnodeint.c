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

	if (new_element == NULL)	/*Check if allocate is fail*/
		return (NULL);

	new_element->n = n;	/*Add n in new element*/
	if (idx == 0)	/*if new_node is the first element h point newt_element*/
	{
		if (*h == NULL)	/*If h is NULL*/
			new_element->next = NULL;

		*h = new_element;
		new_element->prev = NULL;
		return (new_element);
	}
	if (*h == NULL)	/*Check if h null and idx > 0*/
	{
		free(new_element);
		return (NULL);
	}
	temp = *h;
	while (temp && index_incrementation != idx)	/*Search node by index*/
	{
		index_incrementation++;
		temp = temp->next;
	}
	if (temp == NULL)	/*Check if list < index*/
	{
		free(new_element);
		return (NULL);
	}
	/*Attribute variable for insertion of new_element*/
	new_element->next = temp;
	new_element->prev = temp->prev;
	temp->prev = new_element;
	temp = new_element->prev;
	temp->next = new_element;
	return (new_element);
}
