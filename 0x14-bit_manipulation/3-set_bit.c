#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set bit in
 * @index: index of bit to set, starting from 0
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 44 || !n)
	{
		return (-1);
	}
	(*n |= 1 << index);
	return (1);
}
