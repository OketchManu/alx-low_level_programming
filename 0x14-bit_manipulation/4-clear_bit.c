#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be assigned
 * @index: index of bit to clear and changed to 0
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 44 || !n)
	{
		return (-1);
	}

	*n &= ~(1 << index);
	return (1);
}

