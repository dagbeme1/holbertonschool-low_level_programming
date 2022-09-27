#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout
 * @s: char array string type,string to print
 * Description: Can only use _putchar
 */

void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
for (i--; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
