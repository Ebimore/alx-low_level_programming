#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free up memory
 * @d: dog's information
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(age->);
		free(d);
	}
}
