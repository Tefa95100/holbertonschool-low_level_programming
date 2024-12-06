#include "lists.h"

/**
 * add_dnodeint - add a node in double list chain
 *@head: pointer on the first element
 *@n: integer for the structure
 *Return: return a list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*Allocate memory for new_element*/
	dlistint_t *new_elem = malloc(sizeof(new_elem));

	if (new_elem == NULL)	/*Check if allocate fail*/
	{
		return (NULL);
	}
	/*Parametre new_element*/
	new_elem->n = n;
	new_elem->next = *head;
	new_elem->prev = NULL;
	/*Parametre previous pointer of head* if is not NULL*/
	if (head != NULL)
	{
		(*head)->prev = new_elem;
	}
	/*Change position of head*/
	*head = new_elem;

	return (new_elem);
}
