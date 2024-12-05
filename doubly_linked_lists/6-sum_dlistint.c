#include "lists.h"

/**
 * sum_dlistint - give the sum of int of list
 *@head: pointer of first element
 *Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
