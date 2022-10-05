#include "main.h"
#include <stdio.h>


/**
 * _strpbrk - search a string for a set of bytes
 * @s: char string array search
 * @accept: char array to check bytes with matches
 * Return: Number of bytes in the intial segment of `s`
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
