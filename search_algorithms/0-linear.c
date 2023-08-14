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
	int i = 0; // Initialize a variable to keep track of the current index

	if (!array) // If the input array is NULL, return -1
		return (-1);

	for (i = 0; i < (int)size; i++, array++) // Loop through each element of the array
	{
		printf("Value checked array[%i] = [%i]\n", i, *array); // Print the current value being checked
		if (*array == value) // If the current value matches the search value
			return (i); // Return the current index
	}
	return (-1); // If value not found, return -1
}
