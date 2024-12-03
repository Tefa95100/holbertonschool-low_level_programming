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
 * add_node - add a node in a linked list
 *@head: pointer of list
 *@str: string to duplicate
 *Return: return the adress of new element or NULL if it failled
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

	new_element = malloc(sizeof(*new_element));

	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->str = strdup(str);
	new_element->len = lenght_string(str);
	if (new_element == NULL)
	{
		new_element->next = NULL;
	}
	else
	{
		new_element->next = *head;
		*head = new_element;
	}

	return (new_element);
}
