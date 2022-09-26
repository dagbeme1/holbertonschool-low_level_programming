#include <ctype.h>
#include "main.h"

/**
 * print_numbers - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */

void print_numbers(void)
{
int c = 0;

for ( c = '0'; c <= '9'; c++)
{

_putchar(c);
}
_putchar('\n');

}
