#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -Entry
 * Return: Always 0
 */
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
