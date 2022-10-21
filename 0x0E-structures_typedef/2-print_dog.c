#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type `struct dog`
 * @d: struct dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owners name
 */

void print_dog(struct dog *d)
{

        if (d == NULL) /* validate if d initiated correctly */
                return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);

}
