#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: char array string type,string to print
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
while (*str != '\0')
_putchar(*str++);
_putchar('\n');
}
