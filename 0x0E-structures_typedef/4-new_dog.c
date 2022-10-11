#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: point to the name of the dog.
 * @age: point to the age of the dog.
 * @owner: point to the name of its owner.
 *
 * Return: a pointer to the new dog or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	return (doggy);
}
