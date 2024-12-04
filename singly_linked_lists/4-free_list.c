#include "lists.h"

/**
 * free_list - free all list
 *@head: position of first element of list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
}
