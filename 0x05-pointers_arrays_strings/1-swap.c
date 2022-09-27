#include "main.h"

/**
 * swap_int - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @a: pointer to int a
 * @b: pointer to int b
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
