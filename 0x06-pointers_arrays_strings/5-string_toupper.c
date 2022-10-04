#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *s)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
