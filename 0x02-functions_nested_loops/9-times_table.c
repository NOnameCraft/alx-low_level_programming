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
if (j == 0)

{
_putchar('0' + s);
}

else if (s >= 10)

{
_putchar(' ');
_putchar('0' + (s / 10));
_putchar('0' + (s % 10));
}

else 

{
_putchar(' ');
_putchar(' ');
_putchar(s + '0');
}

if (j != 9)

{
_putchar(',');
}
}
_putchar('\n');
}
}
