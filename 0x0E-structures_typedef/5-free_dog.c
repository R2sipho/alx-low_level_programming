#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a memory allocated for a dog
 * @d: dog to free
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

