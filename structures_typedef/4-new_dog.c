#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * dogy - create new dog and save name and owner
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: return new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *dogy = malloc(sizeof(dog_t));

	if (dogy == NULL)
	{
		return (NULL);
	}
	while (name[i] != '\0')
	{
		i++;
	}
	dogy->name = malloc(i + 1);
	if (dogy->name == NULL)
	{
		free(dogy);
	}
	dogy->name = name;
	for (i = 0; owner[i] != '\0';)
	{
		i++;
	}
	dogy->owner = malloc(i + 1);
	if (dogy->owner == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = owner;
	dogy->age = age;
	return (dogy);
}
