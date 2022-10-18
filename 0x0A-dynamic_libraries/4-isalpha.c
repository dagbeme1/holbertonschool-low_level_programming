#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _isalpha - check the code
 * @c: character to check
 *
 * print_alphabet - print lowercase alphabet
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
