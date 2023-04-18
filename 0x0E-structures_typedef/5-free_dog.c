#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - use frees dogs.
 * @d: C  struct dog.
 *
 * Return: no return.
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
