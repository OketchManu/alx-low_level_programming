#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int cout = 0, l;

	while (*src)
	{
	src++;
	cout++;
	}
	for (l = 0; l < cout; l++)
	src--;

	for (l = 0; l < cout; l++)
	{
	dest[l] = *src;
	src++;
	}
	dest[l] = *src;
	return (dest);
}
