#include "main.h"

/**
 * more_numbers - check the code
 *
 * _putchar Always newline.
 */

void more_numbers(void)
{
char a;
int un;

/* for loop */
for (un = 1; un <= 10; un++)
{
for (a = 0; a <= 14; a++)
{
if (a / 10 > 0)
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
_putchar('\n');
}
}

