#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{

	int black, white;

	for (black = 0; black < 8; black++)
	{
		for (white = 0; white < 8; white++)
			_putchar(a[black][white]);
		_putchar('\n');
	}
}
