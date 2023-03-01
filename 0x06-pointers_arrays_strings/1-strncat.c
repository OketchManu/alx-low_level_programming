#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: A pointer to the string to be concatinated upon.
 * @src: The source string to be appended to @dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
