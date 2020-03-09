#include "dog.h"

/**
 *init_dog - initialize a variable of type struct dog
 *@d: dog structure
 *@name: name init
 *@age: age init
 *@owner: owner init
 *Return: 0 success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
