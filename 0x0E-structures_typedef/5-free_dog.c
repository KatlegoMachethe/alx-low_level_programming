#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dogs
 * @d: dog_t input
 * Return: void
 */

void free_dog(dot_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
