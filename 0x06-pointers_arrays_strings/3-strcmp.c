#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - concatenate two strings
 * @s1: string
 * @s2: string
 * Return: pointer to resulting `dest`
 */

int _strcmp(char *s1, char *s2)
{
	int comp;

	for (comp = 0; s1[comp] != '\0' || s2[comp] != '\0'; comp++)
	{
		if (s1[comp] != s2[comp])
			return (s1[comp] - s2[comp]);
	}
	return (0);

}
