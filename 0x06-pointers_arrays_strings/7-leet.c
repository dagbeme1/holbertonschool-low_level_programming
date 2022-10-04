#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */
char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int repl;
	int prin;

	for (prin = 0; s[prin] != '\0'; prin++)
	{
		for (repl = 0; a[repl] != '\0'; repl++)
		{
			if (s[prin] == a[repl])
				s[prin] = b[repl];
		}
	}

	return (s);
}
