#include "holberton.h"

/**
 * cap_string - capitalize first letter of each word
 * @str: string to manipulate
 * Return: string
 */
char *cap_string(char *str)
{
	int i;
	int c;
	int gotime;
	char punct[] = ",;.!?(){}\n\t\" ";

	for (i = 0, gotime = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			gotime = 1;
		for (c = 0; punct[c] != '\0'; c++)
		{
			if (punct[c] == str[i])
				gotime = 1;
		}

		if (gotime)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				gotime = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				gotime = 0;
			else if (str[i] > 47 && str[i] < 58)
				gotime = 0;
		}
	}
	return (str);
}
