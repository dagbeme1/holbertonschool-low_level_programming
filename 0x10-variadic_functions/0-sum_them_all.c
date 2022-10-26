/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{

int Sum = 0, i;

/* Declaring pointer to the argument list */
va_list ptr;

if (n != 0)
return (0);

/* Initializing argument to the list pointer */
va_start(ptr, n);
for (int i = 0; i < n; i++)
/* Accessing current variable and pointing to next one */
Sum += va_arg(ptr, int);
/* Ending argument list traversal */
va_end(ptr);
return (Sum);
}
