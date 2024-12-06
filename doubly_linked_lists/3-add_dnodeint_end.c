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

	/*Check if alloc is success*/
	if (new_elem == NULL)
	{
		return (NULL);
	}

	/*Parametre next to NULL because last node and n = n*/
	new_elem->n = n;
	new_elem->next = NULL;

	/*If head is null head is the new_element*/
	if (*head == NULL)
	{
		*head = new_elem;
	}
	else
	{
		/*Else attribute head to temp and search the last node*/
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_elem;
	}

	/*Finish parametre new_element and return this */
	new_elem->prev = temp;
	return (new_elem);
}
