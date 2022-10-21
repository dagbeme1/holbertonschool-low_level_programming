#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name) /* free members of struct that exist */
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
