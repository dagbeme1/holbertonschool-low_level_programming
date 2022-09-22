#include "main.h"

/**
 * jack_bauer - prints the last digit of a numer.
 * @void: digit to find the last place of.
 * Return: The last digit.
 */

void jack_bauer(void)
{
	int hours, minutes;
	/*for loop to get the hours and minutes*/
	for (hours = 0; hours <= 23; hours++)
	{
	for (minutes = 0; minutes <= 59; minutes++)
	{
	_putchar((hours / 10) + '0');
	_putchar((hours % 10) + '0');
	_putchar(":");
	_putchar((minutes / 10) + '0');
	_putchar((minutes % 10) + '0');
	_putchar('\n');
	}
	}

}
