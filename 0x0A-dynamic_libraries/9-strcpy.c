#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
int sp;
for (sp = 0; src[sp] != '\0'; sp++)
{
dest[sp] = src[sp];
}
dest[sp] = '\0';

return (dest);
}
