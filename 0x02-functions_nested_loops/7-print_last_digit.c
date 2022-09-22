#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int n)
{
	/*finding the last digits*/
	int lastdigits = n % 10;
	/*if statement literally commanding lastdigits */
	if (lastdigits < 0)
	lastdigits *= -1;
	_putchar(lastdigits + '0');
	return (lastdigits);
}
