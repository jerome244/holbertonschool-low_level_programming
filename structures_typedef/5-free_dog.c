#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory of a structure
 * @d: pointer from a struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
