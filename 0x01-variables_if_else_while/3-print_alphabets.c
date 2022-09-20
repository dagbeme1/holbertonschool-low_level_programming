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
	char ch = 'a';
	char CAPS = 'A';
	/* write the character to the standard output */
	for (ch = 'a'; ch <= 'z';  ch++)
	putchar(ch);
	for (CAPS = 'A'; CAPS <= 'Z'; CAPS++)
	putchar(CAPS);

	putchar('\n');

	return (0);

}
