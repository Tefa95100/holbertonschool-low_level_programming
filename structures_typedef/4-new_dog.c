#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - create new dog and save name and owner
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: return new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	while (name[i] != '\0')
	{
		i++;
	}
	new_dog->name = malloc(i);
	if (new_dog->name == NULL)
	{
		free(new_dog);
	}
	new_dog->name = name;
	for (i = 0; owner[i] != '\0';)
	{
		i++;
	}
	new_dog->owner = malloc(i);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = owner;
	new_dog->age = age;
	return (new_dog);
}
