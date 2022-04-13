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

{

s = i * j;
_putchar((s / 10));
_putchar((s % 10));
_putchar(',');
_putchar(' ');

}

_putchar('\n');

}

}
