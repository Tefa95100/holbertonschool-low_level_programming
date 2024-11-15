#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

/**
 * print_dog - print informations of dog
 *@d: structure to print
 */
void print_dog(struct dog *d)
{
	char empty = "(nil)";

	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %.6f", d->age);
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Owner: %s\n", d->owner);
	}
}
