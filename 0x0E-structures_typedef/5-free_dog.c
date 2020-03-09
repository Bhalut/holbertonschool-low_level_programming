#include <stdlib.h>
#include "dog.h"

/**
 *free_dogs - frees dogs.
 *@d: dog strcture
 *Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
