#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: point to the variable to initialized.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			d->name = name;
		d->age = age;
		if (d->owner != NULL)
			d->owner = owner;
	}
}
