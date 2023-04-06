#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = sizeof(unsigned long int) * 8;
	unsigned int i, nf = 0;

	for (i = 0; i < k; i++)
	{
		if ((m & 1) != (n & 1))
			nf += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nf);
}
