#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

int size = n; /* only accept positive sizes */
int prin;

if (size > 0)
{

for (prin = 0; prin < size; prin++)
dest[prin] = src[prin];
}

return (dest);
}
