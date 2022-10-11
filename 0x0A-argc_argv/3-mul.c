#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */

int main(int argc, char *argv[])
{

	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* mulitply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
