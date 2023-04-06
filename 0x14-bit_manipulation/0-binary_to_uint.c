#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: the converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, place = 1;
	int n;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
		;
	n--;
	for (; n >= 0; n--)
	{
		if (b[n] == '0')
		{
			place *= 2;
		}
		else if (b[n] == '1')
		{
			uint += place;
			place *= 2;
		}
		else
		{
			return (0);
		}
	}

	return (uint);
}

