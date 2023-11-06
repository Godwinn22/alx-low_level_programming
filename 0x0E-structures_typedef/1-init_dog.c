#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to the dog
 * @name: the name property
 * @age: the age property
 * @owner: the owner property
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
