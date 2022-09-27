#include "main.h"

/**
 * print_square - check the code
 *@n: integer
 * _putchar Always newline.
 */

void print_square(int size)
{
int square;
int hash;

if (size > 0)
{
for (square = 1; square <= size; square++)
{
for (hash = 1; hash <= size; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');

}
