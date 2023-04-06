#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 1 if machine is little-endian, 0 if machine is big-endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *b = (char *)&k;

	if (*b == 1)
{
	return (1);
}
	else
{
	return (0);
}
}
