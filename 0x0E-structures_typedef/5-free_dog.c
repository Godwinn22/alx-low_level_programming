#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: the dog to be made free
 * Return: returns teh length of the string
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
