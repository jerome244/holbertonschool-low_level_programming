#include "dog.h"

/**
 * init_dog - initialize a structure by filling informations
 * @d: pointer to dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: return pointer of struct after modifications
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
i	d->owner = owner;
}
