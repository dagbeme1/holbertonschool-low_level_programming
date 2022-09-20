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
	int base = 0;

	/* for loop to print out base that is seperated by a ',' */
	for (base = 0; base <= 9; base++)
	{
	putchar((base % 10) + '0');
	if (base == 9)
	continue;

	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);

}
