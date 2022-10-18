#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int ps, c;

	for (ps = 0; dest[ps] != '\0'; ps++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, ps++)
	{
		dest[ps] = src[c];
	}
	return (dest);
}
