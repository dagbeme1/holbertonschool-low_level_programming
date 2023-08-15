#include "search_algos.h" /* Include the header file for search algorithms */

/**
 * binary_search - function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0, start = 0, end = (int)size - 1, mid = 0;  /* Variables counting */

	if (!array)
		return (-1);  /* Return -1 if array is NULL */

	while (end >= start)  /* Binary search loop */
	{
		printf("Searching in array: ");  /* Print message */

		for (i = start; i <= end; i++)  /* Loop to print elements */
		{
			printf("%i", array[i]);  /* Print element */

			if (i != end)  /* Check if not last element */
				printf(", ");  /* Print comma and space */
			else
				printf("\n");  /* Print newline character */
		}

		mid = (start + end) / 2;  /* Calculate middle index */

		if (array[mid] == value)  /* Check if middle element is equal to value */
			return (mid);  /* Return index if value is found */

		if (value < array[mid])  /* Check if value is less than middle element */
			end = mid - 1;  /* Update end index for left half */
		else
			start = mid + 1;  /* Update start index for right half */
	}

	return (-1);  /* Return -1 if value is not found */
}
