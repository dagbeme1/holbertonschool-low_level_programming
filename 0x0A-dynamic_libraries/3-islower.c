#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _islower - check the code
 * @c: character to check
 *
 * print_alphabet - print lowercase alphabet
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
