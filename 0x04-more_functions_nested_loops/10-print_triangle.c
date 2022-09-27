#include "main.h"

/**
 * print_triangle - check the code
 *@size: integer
 * _putchar Always newline.
 */

void print_triangle(int size)
{
int square;
int hash;
int height;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (hash = 1; hash <= (size - height); hash++)
			_putchar(' ');

		for (square = 1; square <= height; square++)
			_putchar('#');

		_putchar('\n');
	}
}
