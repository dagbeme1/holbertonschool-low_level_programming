#include <string.h>
#include "main.h"

/**
 * _strlen - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @s: pointer to int *s
 * Return: length of string
 */

int _strlen(char *s)
{
int length;
while (*s != '\0')
{
length++;
s++;
}

return (length);

}
