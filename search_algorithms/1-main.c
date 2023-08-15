#include <stdio.h>                 /* Include the standard I/O library */
#include <stdlib.h>                /* Include the standard library */
#include "search_algos.h"          /* Include the header file for search algorithms */

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {                 /* Declare an integer array named 'array' */
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9 /* Initialize the array with values */
    };
    size_t size = sizeof(array) / sizeof(array[0]);  /* Calculate the size of the array */

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2)); /* Print the result of binary search */
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));     /* Print the result of binary search with limited size */
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999)); /* Print the result of binary search */
    return (EXIT_SUCCESS);          /* Return EXIT_SUCCESS to indicate successful program execution */
}
