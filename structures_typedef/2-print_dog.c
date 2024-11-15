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
	if (d == NULL)
	{
		exit(1);
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: nil\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (isnan(d->age))
		{
			printf("age: nil\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("owner: nil\n");
		}
		else
		{
			printf("Name: %s\n", d->owner);
		}
	}
}
