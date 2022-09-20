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
	char ch = 'z';
	/* write the character to the standard reverse output */
	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);

	putchar('\n');

	return (0);

}
