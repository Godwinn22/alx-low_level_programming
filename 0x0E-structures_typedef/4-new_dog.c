#include "dog.h"

/**
 * strn_len - Finds the length of the string
 * @strn: the string
 * Return: returns teh length of the string
*/
int strn_len(char *strn)
{
	int str_len = 0;

	while (*strn++)
	{
		str_len++;
	}
	return (str_len);
}

/**
 * *strn_copy - copies a string
 * @dest: destination of the string
 * @src: source of the string
 * Return: returns a pointer to dest
*/
char *strn_copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - a function that creates a new dog.
 * @name: the name property
 * @age: the age property
 * @owner: the owner property
 * Return: returns the created struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (strn_len(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (strn_len(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strn_copy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = strn_copy(new_dog->owner, owner);
	return (new_dog);
}
