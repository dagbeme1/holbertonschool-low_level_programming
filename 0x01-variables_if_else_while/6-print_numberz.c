#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	/* get the character to be written */
	int base10 = '0';

	/* for loop to print out base 10 */
	for (base10 = '0'; base10 <= '9'; base10++)

	putchar(base10);

	putchar('\n');

	return (0);

}
