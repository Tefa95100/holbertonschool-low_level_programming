#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list of string
 *@h: index for browse list
 *Return: return the size of list
 */
size_t print_list(const list_t *h)
{
	unsigned long int lenght = 0;

	while (h)	/*Browse node*/
	{
		if (h->str == NULL)	/*Check if str is NULL else print nil*/
		{
			printf("[0] (nil)\n");
		}
		else	/* print lenght string and string*/
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		++lenght;	/*Increment lenght of node*/
		h = h->next;	/*Go to next node*/
	}
	return (lenght);
}
