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

	/*Browse the list and search the node*/
	while (head->next != NULL && index_increment != index)
	{
		head = head->next;
		index_increment++;
	}
	/*Return NULL if the ends of list and index is not find*/
	if (head->next == NULL && index_increment != index)
	{
		return (NULL);
	}
	/*return the node find*/
	return (head);
}
