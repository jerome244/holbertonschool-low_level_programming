#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copy a string
 * @s: string to copy
 * Return: pointer to string copy
 */
char *_strcpy(char *s)
{
	int i;
	char *p;

	for (i = 0; s[i]; i++)
		;
	p = malloc(i + 1);
	if (p)
	{
		for (; i >= 0; i--)
			p[i] = s[i];
	}
	return (p);
}

/**
 * new_dog - creates a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(*newdog));
	if (newdog == NULL)
		return (NULL);
	newdog->name = _strcpy(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = _strcpy(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	
	return (newdog);
}
