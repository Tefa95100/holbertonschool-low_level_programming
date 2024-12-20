#include "lists.h"

/**
 * free_list - free all list
 *@head: position of first element of list
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	if (head)
	{
		while (head)	/*Browse list while head is not NULL*/
		{
			temp = head->next;
			free(head->str);	/*free string in struct*/
			free(head);	/* free head before*/
			head = temp;
		}
		free(head);
	}
}
