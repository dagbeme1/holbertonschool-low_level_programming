#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - print lowercase alphabet
 * Return: Always 0.
 */

/*print_alphabet: this is the void print_alphabet*/
void print_alphabet(void)
{

	char bet = 'a';
	/* for loop */
	for (bet = 'a'; bet <= 'z'; bet++)
	{
	_putchar(bet);
	}
	_putchar('\n');

	return (0);
}
