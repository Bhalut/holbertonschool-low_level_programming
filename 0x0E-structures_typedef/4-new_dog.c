#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: Holds the string to be copied
 * Return: a pointer to a char
 */
char *_strdup(char *str)
{
	char *strc;
	int i;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != 0; i++)
	{
	}
	strc = malloc((sizeof(char) * 1) + i);
	if (strc == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != 0; i++)
	{
		strc[i] = str[i];
	}
	strc[i] = 0;
	return (strc);
}

/**
 *new_dog - creates a new dog.
 *@name: name structure
 *@age: age: structure
 *@owner: owner structure
 *Return: structure or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == 0)
		return (0);

	dog->name = _strdup(name);
	if (dog->name == 0)
	{
		free(dog);
		return (0);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == 0)
	{
		free(dog->name);
		free(dog);
		return (0);
	}

	dog->age = age;

	return (dog);
}
