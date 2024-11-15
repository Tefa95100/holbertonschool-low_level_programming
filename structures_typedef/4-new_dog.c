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
	dog_t *dogy = malloc(sizeof(dog_t));

	if (dogy == NULL)	/*Check is dogy failled*/
	{
		return (NULL);
	}
	while (name[i] != '\0')	/*search lenght of name*/
	{
		i++;
	}
	dogy->name = malloc(i);	/*Reserved name*/
	if (dogy->name == NULL)	/*Check is dogy name is null and free if NULL*/
	{
		free(dogy);
		return (NULL);
	}
	dogy->name = name;	/*copy string*/
	for (i = 0; owner[i] != '\0';)	/*search lenght of owner*/
	{
		i++;
	}
	dogy->owner = malloc(i);	/*Reserve dogy owner*/
	if (dogy->owner == NULL)	/*Check is dogy owner is null and free if NULL*/
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}
	dogy->owner = owner;
	dogy->age = age;
	return (dogy);	/*return dogy*/
}
