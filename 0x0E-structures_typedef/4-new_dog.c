#include <stdlib.h>
#include "dog.h"

/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: pointer charecter (string)
 *Return: pointer value - duplicate str parameter
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc((sizeof(*ptr) * len) + 1);
	if (!(ptr == NULL))
	{
		for (i = 0; i < len; i++)
			ptr[i] = str[i];

		return (ptr);
	}
	else
		return (NULL);
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
	dog_t *dog = malloc(sizeof(dog_t);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL)
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
