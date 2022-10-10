#include "main.h"

/**
 * find_root - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */
int find_root(int c, int i)
{
	if (i * i > c)
		return (-1);

	if (i * i == c)
		return (i);

	return (find_root(c, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (find_root(n, 1));
}
