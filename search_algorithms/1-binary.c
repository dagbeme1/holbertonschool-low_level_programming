#include "search_algos.h"

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
        int i = 0, start = 0, end = (int)size - 1, mid = 0;  /* Declare integer variables */

        if (!array)
                return (-1);  /* Return -1 if array is NULL */
        while (end >= start)  /* Run the binary search loop while end >= start */
        {
                printf("Searching in array: ");  /* Print message indicating searching in array */
                for (i = start; i <= end; i++)  /* Loop to print elements in the current range */
                {
                        printf("%i", array[i]);  /* Print current array element */
                        if (i != end)  /* Check if current element is not the last one */
                                printf(", ");  /* Print comma and space if not the last element */
                        else
                                printf("\n");  /* Print newline character if last element */
                }
                mid = (start + end) / 2;  /* Calculate middle index of current range */
                if (array[mid] == value)  /* Check if middle element is equal to target value */
                        return (mid);  /* Return middle index if value is found */
                if (value < array[mid])  /* Check if value is less than middle element */
                        end = mid - 1;  /* Update end index to search in left half */
                else
                        start = mid + 1;  /* Update start index to search in right half */
        }
        return (-1);  /* Return -1 if value is not found */
}
