#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	/* Xor both nums to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to right and tallying the ones up */
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);
}

/*
* tested and works with using a while loop
* rather than just using a do-while loop
*{
*	unsigned long int difference = n ^ m, diff_bits = 0;
*
*	while (difference > 0)
*	{
*		diff_bits += (difference & 1);
*		difference >>= 1;
*	}
*
*	return (diff_bits);
*}
*/
