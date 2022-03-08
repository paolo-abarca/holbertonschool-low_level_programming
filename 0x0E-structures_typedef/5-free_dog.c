#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function
 * @d: dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
