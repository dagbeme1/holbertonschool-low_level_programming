#include "main.h"

/**
 * print_diagonal - check the code
 *@n: integer
 * _putchar Always newline.
 */

void print_diagonal(int n)
{
int dia;
int blank;

if (n > 0)
{
for (dia = 1; dia <= n; dia++)
{
for (blank = 1; blank < dia; blank++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');

}
