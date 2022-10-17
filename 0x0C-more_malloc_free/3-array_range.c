#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max) /* validate input */
		return (NULL);

	/* malloc and check for error */
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
