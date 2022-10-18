#include "main.h"
#include <stdio.h>


/**
 * _strspn - search a string for a set of bytes
 * @s: char string array search
 * @accept: char array to check bytes with matches
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int matches = 0;

	while (s[i] != '\0') /*iterate through string*/
	{

		for (j = 0; accept[j] != '\0'; j++) /*iterate through target*/
		{
			if (s[i] == accept[j]) /*record & break at first match*/
			{
				matches++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (matches);/*return if idx doesn't match*/
		}
		i++;
	}
	return (matches); /* return num if all match till end */

}
