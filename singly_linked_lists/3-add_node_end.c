#include "lists.h"
#include <string.h>

/**
 * lenght_string - calculate the lenght of a string
 *@str: string for calculate lenght
 *Return: return the lenght
 */
int lenght_string(const char *str)
{
	int lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
/**
 * add_node_end - add a node to end of list
 *@head: pointer of list
 *@str: string to duplicate
 *Return: return the adress of new element or NULL if it failled
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	list_t *temp = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	/*Memory attribution*/
	new_element = malloc(sizeof(*new_element));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->str = strdup(str);
	/*if str duplicate fail free new element*/
	if (new_element->str == NULL)
	{
		free(new_element);
		return (NULL);
	}
	new_element->len = lenght_string(str);
	new_element->next = NULL;
	/* if head is null attribute new element*/
	if (*head == NULL)
	{
		*head = new_element;
	}
	else
	{
		temp = *head;	/*head is not null attribute head to temp*/
		while (temp->next != NULL)	/*browse temp for reach the end*/
		{
			temp = temp->next;
		}	/*Stock pointer of new element on previous last*/
		temp->next = new_element;
	}
	return (new_element);
}
