#include "lists.h"

/**
 * delete_dnodeint_at_index - remove an element by index
 *@head: first element
 *@index: position of element to remove
 *Return: return 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *transfert = NULL;
	unsigned int index_incrementation;

	if (*head == NULL)	/*Check if head is null*/
	{
		return (-1);
	}
	if (index == 0)	/*Check if index is  for attribute head to next node*/
	{
		*head = temp->next;
	}
	/*Search the position of node*/
	while (temp->next != NULL && index_incrementation != index)
	{
		index_incrementation++;
		temp = temp->next;
	}
	/*Check if previous is NUll else change pointer of previous*/
	if (temp->prev != NULL)
	{
		transfert = temp->prev;
		transfert->next = temp->next;
	}
	/*Check if next is NULL else change pointer of next*/
	if (temp->next != NULL)
	{
		transfert = temp->next;
		transfert->prev = temp->prev;
	}
	free(temp);
	if (temp == NULL)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
