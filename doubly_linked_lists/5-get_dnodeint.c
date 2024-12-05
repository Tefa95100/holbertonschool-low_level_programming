#include "lists.h"

/**
 * get_dnodeint_at_index - Search a node with an index
 *@head: pointer towards first element
 *@index: number of node search
 *Return: return the node fiding
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int index_increment = 0;

	while (head->next != NULL && index_increment != index)
	{
		head = head->next;
		index_increment++;
	}
	if (head->next == NULL)
	{
		return (NULL);
	}
	return (head);
}
