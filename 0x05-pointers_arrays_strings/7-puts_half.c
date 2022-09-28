#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half a string, followed by a new line, to stdout
 * @str: char array string type,string to print
 * Description: Can only use _putchar
 */

void puts_half(char *str)
{
int c;

for (c = 0; str[c] != '\0'; c++)
;
c++;
for (c /= 2; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
