#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unasigned long int to be searched
 * @index: index of bit to get, starting from 0
 *
 * Return: value of bit at index or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 44)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
