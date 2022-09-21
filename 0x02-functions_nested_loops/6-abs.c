#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _abs - abs of number
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int _abs(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        }
        else if (n == 0)
        {
                _putchar('0');
                return (0);
        }
        else
        {
                _putchar('-');
                return (-1);
        }
}
