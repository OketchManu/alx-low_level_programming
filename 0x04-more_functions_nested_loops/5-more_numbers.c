#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 * Return: 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (x = 0; x <= 14; x++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
