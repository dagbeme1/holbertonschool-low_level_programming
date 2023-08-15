#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>    // Standard I/O functions
#include <stdlib.h>   // Standard library functions
#include <stdbool.h>  // Boolean data type
#include <stddef.h>   // Size type
#include <stdint.h>   // Integer types
#include <math.h>     // Mathematical functions

#include <unistd.h>   // POSIX API functions - for system calls and POSIX environment
#include <string.h>   // String manipulation functions
#include <stdarg.h>   // Variable argument functions
#include <sys/wait.h> // Functions for managing child processes and waiting
#include <sys/stat.h> // File status functions
#include <sys/types.h>// Data types
#include <limits.h>   // Constants defining the limits of integer types
#include <fcntl.h>    // File control functions
#include <errno.h>    // Error handling

/* Function prototype for linear_search */
int linear_search(int *array, size_t size, int value);

/* Function prototypes for other search algorithms */
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

/* Helper function prototypes */
void print_array(int *array, size_t size);  // Print an array
void print_result(int index, int value);    // Print search result

#endif /* SEARCH_ALGOS_H */
