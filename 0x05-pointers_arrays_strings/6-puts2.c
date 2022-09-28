#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints a string, followed by a new line, to stdout
 * @str: char array string type,string to print
 * Description: Can only use _putchar
 */


void puts2(char *str)
{

int c;

for (c = 0; str[c] != '\0'; c++)
{
if (c % 2 == 0)
_putchar(str[c]);
}
_putchar('\n');
}
