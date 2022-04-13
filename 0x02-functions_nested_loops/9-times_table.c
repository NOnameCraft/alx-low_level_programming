#include "main.h"

/**
 * times_table - entry point
 *
 * Return: no value
 */

void times_table(void)

{

int i, j, s;

for (i = 0; i <= 9; i++)

{

for (j = 0; j <= 9; j++)

s = i * j;

if (s >= 0)

{

_putchar('0' + s);
_putchar(',');
_putchar(' ');

}

if (s >= 10)

{
_putchar('0' + (s / 10));
_putchar('0' + (s % 10));
_putchar(',');
_putchar(' ');

}

else {

_putchar('\n');

}

}

}
