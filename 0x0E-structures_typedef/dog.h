#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure of a dog type
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 *
 * Description: A structure created for descripting a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
