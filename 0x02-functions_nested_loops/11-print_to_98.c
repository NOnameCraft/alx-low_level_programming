#include "main.h"

/**
 * print_to_98 - entry point
 * @n: argument
 * Return: no value
 */
void print_to_98(int n)

{
int i;
if (n <= 0)

{
for (i = n; i <= 98; i++)

{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));

if (i != 98) 

{
_putchar(',');
_putchar(' ');
}
}
}

if (n > 0)

{
for (i = n; i >= 98; i--)

{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
if (i != 98)

{
_putchar(',');
_putchar(' ');
}
}
}
