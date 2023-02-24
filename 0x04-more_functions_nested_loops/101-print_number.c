#include "main.h"

/**
 * print_number - prints an integer
 * @n: param
 */
void print_number(int n)
{
unsigned int i, k, count;

if (n < 0)
{
_putchar(45);
i = n * -1;
}
else
{
i = n;
}
k = i;
count = 1;
while (k > 9)
{
k /= 10;
count *= 10;
}
for (; count >= 1; count /= 10)
{
_putchar(((i / count) % 10) + 48);
}
}
