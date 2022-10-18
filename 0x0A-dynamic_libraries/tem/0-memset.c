#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n; /* only accept positive sizes */
	int prin;

	if (size > 0)
	{

		for (prin = 0; prin < size; prin++)
			s[prin] = b;
	}

	return (s);
}
