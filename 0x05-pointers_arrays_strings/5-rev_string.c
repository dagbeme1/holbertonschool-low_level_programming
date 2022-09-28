#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string, followed by a new line, to stdout
 * @s: char array string type,string to print
 * Description: Can only use _putchar
 */

void rev_string(char *s)
{
int i, c, l;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}

}
