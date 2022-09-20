#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * print_alphabet - print lowercase alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char bet = 'a';

	int tencount;
	/* for loop */
	for (tencount = 0; tencount <= 10; tencount++)
	{
	for (bet = 'a'; bet <= 'z'; bet++)
	{
	_putchar(bet);
	}
	_putchar('\n');
	}

}
