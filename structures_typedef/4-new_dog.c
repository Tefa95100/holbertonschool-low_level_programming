#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strlen - count the length of a string
 *@s: counting string
 *Return: lenght of string
 */
int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; lenght++)
		s++;
	return (lenght);
}
/**
 * *_strcpy - copy a pointer
 *@dest: pointer of for receive copy
 *@src: pointer to copy
 *Return: return the copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
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
	dogy->name = malloc(_strlen(name));	/*Reserved name*/
	if (dogy->name == NULL)	/*Check is dogy name is null and free if NULL*/
	{
		free(dogy);
		return (NULL);
	}
	_strcpy(dogy->name, name);
	dogy->owner = malloc(_strlen(owner));	/*Reserve dogy owner*/
	if (dogy->owner == NULL)	/*Check is dogy owner is null and free if NULL*/
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}
	_strcpy(dogy->owner, owner);
	dogy->age = age;
	return (dogy);	/*return dogy*/
}
