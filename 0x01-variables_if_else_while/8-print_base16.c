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
	int base16 = '0';
	char ch;

	/* for loop to print out base 16 and ch */
	for (base16 = '0'; base16 <= '9'; base16++)
	putchar(base16);

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);

	putchar('\n');

	return (0);

}
