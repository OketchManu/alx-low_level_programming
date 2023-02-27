#include "main.h"

/**
 * puts_half - returns the length of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int len, x, i;

len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (len % 2)
{
for (x = (len - 1) / 2; x < len - 1; x++)
{
_putchar(str[x + 1]);
}
}
_putchar('\n');
}
