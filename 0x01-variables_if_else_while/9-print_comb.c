#include <stdio.h>

/**
 * main - print all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c < 10);

		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');

		return (0);
}
