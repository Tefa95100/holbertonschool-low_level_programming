#include "lists.h"

/**
 * free_dlistint - free a double list
 *@head: pointer of first element
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}
	/*Browse list and free before pass to next node*/
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	/*free the last node*/
	free(head);
}
