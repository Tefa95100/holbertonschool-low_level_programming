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
	temp = head->next;
	while (head->next != NULL)
	{
		free(head);
		head = temp;
		temp = head->next;
	}
	free(temp);
}
