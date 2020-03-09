#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints a struct dog
 *@d: dog structure
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			d->name = "(nil)";

		if (!d->owner)
			d->owner = "(nil)";

		if (d->age)
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name, d->age, d->owner);
		}
		else
		{
			printf("Name: %s\nAge: (nil)\nOwner: %s\n",
			       d->name, d->owner);
		}
	}
}
