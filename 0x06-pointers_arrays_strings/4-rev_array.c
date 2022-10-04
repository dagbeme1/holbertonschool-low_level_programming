#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int rev;
	int revar;

	for (rev = 0; rev < (n / 2); rev++)
	{
		revar = a[rev];
		a[rev] = a[n - rev - 1];
		a[n - rev - 1] = revar;
	}
}
