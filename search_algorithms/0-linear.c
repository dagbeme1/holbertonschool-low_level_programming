#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value is the value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
    int i = 0;  // Initialize a counter

    // Check if the array is NULL
    if (!array)
        return (-1);  // Return -1 if array is NULL

    // Loop through the array
    for (i = 0; i < (int)size; i++, array++)
    {
        // Print the value being checked in the array
        printf("Value checked array[%i] = [%i]\n", i, *array);

        // Check if the current value matches the target value
        if (*array == value)
            return (i);  // Return the current index if value is found
    }

    return (-1);  // Return -1 if value is not found
}
