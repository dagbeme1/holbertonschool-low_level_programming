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
	/* write the character to the standard output */
	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q' && ch != 'e')
	putchar(ch);

	putchar('\n');

	return (0);

}
