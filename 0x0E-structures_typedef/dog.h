#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
/**
 * struct dog - dog structure
 * @name: the name property
 * @age: the age property
 * @owner: the owner property
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
