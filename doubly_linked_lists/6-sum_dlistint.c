#include "lists.h"

/**
 * sum_dlistint - give the sum of int of list
 *@head: first element
 *Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	/*Check if head is NULL*/
	if (head == NULL)
	{
		return (0);
	}
	/*Browse the list and integer in the sum*/
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	/*Add the integer in last node before return the sum*/
	sum += head->n;
	return (sum);
}
