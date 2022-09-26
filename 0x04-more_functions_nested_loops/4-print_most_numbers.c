#include "main.h"

void print_most_numbers(void)
{ 
/* get the character to be written */
int u = 2;
/* write the character to the standard output */
for (u = '0'; u <= '9'; u++)
if (u != '2' && u != '4')
_putchar(u);

_putchar('\n');

       
}
