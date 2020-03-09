#include <stdlib.h>
#include "dog.h"

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

	if (dog)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;

		return (dog);
	}
	else
	{
		return (NULL);
	}
}
