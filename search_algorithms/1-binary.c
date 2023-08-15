#include "search_algos.h" /* Include the header file for search algorithms */

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value is the value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0, start = 0, end = (int)size - 1, mid = 0; /* Declare integer variables for counting, start, end, and mid */

	if (!array)
		return (-1); /* Return -1 if array is NULL */
	while (end >= start) /* Run the binary search loop while end is greater than or equal to start */
	{
		printf("Searching in array: "); /* Print a message indicating searching in array */
		for (i = start; i <= end; i++) /* Loop to print the elements in the current range */
		{
			printf("%i", array[i]); /* Print the current array element */
			if (i != end) /* Check if the current element is not the last one in the range */
				printf(", "); /* Print a comma and space if it's not the last element */
			else
				printf("\n"); /* Print a newline character if it's the last element */
		}
		mid = (start + end) / 2; /* Calculate the middle index of the current range */
		if (array[mid] == value) /* Check if the middle element is equal to the target value */
			return (mid); /* Return the middle index if the value is found */
		if (value < array[mid]) /* Check if the value is less than the middle element */
			end = mid - 1; /* Update the end index to search in the left half */
		else
			start = mid + 1; /* Update the start index to search in the right half */
	}
	return (-1); /* Return -1 if the value is not found */
}
